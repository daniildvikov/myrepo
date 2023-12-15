#include <ostream>
#ifndef OOP_MESSAGE_H
#define OOP_MESSAGE_H


class Message {
public:
    virtual ~Message() = default;
    virtual void print(std::ostream& os) const = 0; 
    friend std::ostream& operator<<(std::ostream& os, const Message& msg);
};

#endif
