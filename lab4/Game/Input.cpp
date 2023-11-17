#include "Input.hpp"

#include <fstream>
#include <sstream>

Command InputHandler::stringToCommand(const std::string& command) {

    if (command == "QUIT")
            return Command::QUIT;
    if (command == "MOVE_UP")
            return Command::MOVE_UP;
    if (command == "MOVE_LEFT")
            return Command::MOVE_LEFT;
    if (command == "MOVE_DOWN")
            return Command::MOVE_DOWN;
    if (command == "MOVE_RIGHT")
            return Command::MOVE_RIGHT;
    if (command == "RESTART")
            return Command::RESTART;
    if (command == "NOTHING")
            return Command::NOTHING;
    return Command::NOTHING;
}

InputHandler::InputHandler(const std::string& filename) : file(filename) {
    if (!file) {
        throw std::runtime_error("Could not open file");
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string key;
        std::string command;
        if (!(iss >> key >> command)) {
            throw std::runtime_error("Invalid file format");
        }
        commandMap[key] = stringToCommand(command);
    }
}

InputHandler::~InputHandler() {
    if (file) {
        file.close();
    }
}

Command InputHandler::handleInput(const std::string& input) {
    auto it = commandMap.find(input);
    if (it == commandMap.end()) {
        return Command::NOTHING;
    }
    return it->second;
}