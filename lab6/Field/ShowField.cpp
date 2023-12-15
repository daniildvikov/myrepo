#include "ShowField.h"
using std::cout;
ShowField::ShowField(Field& field, Controller& controller) : field(field), controller(controller) {}

void ShowField::PrintField() {
    system("cls");
    for(int i = 0; i < field.getHeight(); i++){
        for(int j = 0; j < field.getWidth(); j++){
            Event* event = field.getCell(j, i).getEvent();
            if(field.getCell(j, i).isPassable()){
                if(controller.getX() == j && controller.getY() == i){
                    cout << " P ";
                }
                else if(field.getExit().first == j && field.getExit().second == i){
                    cout << " F ";
                }
                else if(dynamic_cast<Heal *>(event)){
                    cout << " + ";
                }
                else if(dynamic_cast<Coin *>(event)){
                    cout << " $ ";
                }
                else if(dynamic_cast<Enemy *>(event)){
                    cout << " - ";
                }
                else if(dynamic_cast<Teleport *>(event)){
                    cout << " T ";
                }
                else{
                    cout << " . ";
                }
            }
            else{
                cout << " # ";
            }
        }
        cout << '\n';
    }
    controller.showPlayerStats();

}
