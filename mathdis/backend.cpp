#include <cpprest/http_listener.h>
#include <cpprest/json.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <filesystem>
// #include "PARSER.H"
// #include "COMPUTER.H"
// #include "P_13_1.h"
// #include "SOLVE_Q_Q.h"
// #include "FACTOR"

using namespace web;
using namespace http;
using namespace utility;
using namespace http::experimental::listener;

class http_server
{
public:
   http_server() : m_listener(U("http://localhost:34568")) {
       m_listener.support(methods::GET, std::bind(&http_server::handle_get, this, std::placeholders::_1));
       m_listener.support(methods::POST, std::bind(&http_server::handle_post, this, std::placeholders::_1));
   }

    void handle_get(http_request request) {
    utility::string_t path = request.relative_uri().path();
    if (path == U("/")) {
        // Читаем HTML страницу из файла
        std::ifstream file("html/index.html");
        if (file.is_open()) {
            std::stringstream buffer;
            buffer << file.rdbuf();
            file.close();

            http_response response(status_codes::OK);
            response.set_body(buffer.str());
            response.headers().add(U("Content-Type"), U("text/html"));
            request.reply(response);
        } else {
            /// Если файл не найден, отправляем ошибку
            request.reply(status_codes::NotFound, "HTML file not found");
        }
    }}

    void handle_post(http_request request) {
        request.extract_json().then([this, request](json::value requestBody) {
            if (requestBody.is_null()) {
                request.reply(status_codes::BadRequest);
                return;
            }
            std::string expression = requestBody[U("expression")].as_string();
            std::string argument = requestBody[U("argument")].as_string();
            bool factorize = requestBody[U("factorize")].as_bool();
            bool reduceRoots = requestBody[U("reduceRoots")].as_bool();
            json::value responseBody;
            std::string alo = "posu";
            responseBody[U("result")] = json::value::string(alo);
            http_response response(status_codes::OK);
            response.set_body(responseBody);
            
            request.reply(response);
        });
    }

   void start() {
       m_listener.open().wait();
   }

private:
   http_listener m_listener;
};

int main() {
   http_server server;
   server.start();

   std::string line;
   std::getline(std::cin, line);

   return 0;
}