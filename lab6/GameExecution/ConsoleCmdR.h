#include "ReadFile.h"
#ifndef OOP_CONSOLECMD_H
#define OOP_CONSOLECMD_H


class ConsoleCmdR {
private:
    bool gameInterruption;
    std::map<std::string, Direction> cmnds;
public:
    explicit ConsoleCmdR(std::map<std::string, Direction> cmnds, bool gameInterruption = false);
    bool getGameInterruption() const;
    std::tuple<Direction, std::string, bool>readInput();
    char getch();
};


#endif //OOP_READCONSOLE_H
