#include "Field.h"
#include "../Control/Controller.h"
#include "../Player/Player.h"
#include "../Events/Heal.h"
#include "../Events/Enemy.h"
#include "../Events/Coin.h"
#include "../Events/Teleport.h"
#define LVL_1_X 10
#define LVL_1_Y 10
#define LVL_2_X 20
#define LVL_2_Y 20


#ifndef OOP_FIELDBUILDER_H
#define OOP_FIELDBUILDER_H
class FieldBuilder {
public:
    explicit FieldBuilder(Field& field, Player& player, Controller& cl, int level);
    ~FieldBuilder() = default;

    void buildField();

private:
    int level;
    Field& field;
    Player& player;
    Controller& cl;
};
#endif //OOP_FIELDBUILDER_H
