#include "ReadFile.h"

const char* DirectionNames[] = {"Up", "Right", "Down", "Left", "Finish", "Invalid"};

ReadFile::ReadFile() {
    string inputLine;
    string includedKeys;
    vector<string> includedCommands;
    vector<Direction> directions {Up, Left, Down, Right, Finish};
    std::fstream file("../commands.txt");
    if (file.is_open()) {

        int index = 0;
        while (file >> inputLine) {
            checkInputCommands(inputLine, includedCommands);
//            std::cout << "inputLine = " << inputLine << '\n';
            file >> inputLine;
//            std::cout << "inputLine = " << inputLine << '\n';
            checkInputKey(inputLine, includedKeys);
            commands.insert(std::pair<string, Direction>(inputLine, directions[index]));
            index++;
        }
        if (index != int(directions.size())){
            std::cout << "Not all commands have their keys: default controls configuration applied" << std::endl;
            commands = default_commands;
//            throw std::invalid_argument("not all commands have their keys");
        }
    }
    else {
        std::cout << "Error occurred when reading a file\n";
    }
}


void ReadFile::checkInputCommands(std::string &inputLine, vector<std::string> &includedCommands) {
    if (find(includedCommands.begin(), includedCommands.end(), inputLine) == includedCommands.end()){
        includedCommands.push_back(inputLine);
    }
    else{
        commands = default_commands;
        std::cout << "Invalid commands list: default controls configuration applied" << std::endl;
//        throw std::invalid_argument("commands.txt is incorrect: command duplication");
    }
}

void ReadFile::checkInputKey(std::string &inputLine, std::string &includedKeys) {
    if (inputLine.length() == 1 && includedKeys.find(inputLine) == string::npos){
        includedKeys.append(inputLine);
    }
    else{
        commands = default_commands;
        std::cout << "Invalid key mapping: default controls configuration applied" << std::endl;
//        throw std::invalid_argument("commands.txt is incorrect: key error");
    }
}

map<string, Direction> ReadFile::getCommands() {
    return commands;
}