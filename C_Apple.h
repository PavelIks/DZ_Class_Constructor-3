#pragma once
#include "E_Color.h"
#include "E_Size.h"
#include "S_Position.h"

class C_Apple
{
public:
    C_Apple();
    C_Apple(E_Colors _color, E_Sizes _size, float _weight, char* _variety, int _x, int _y);

    void setSize(E_Sizes _size);
    void setColor(E_Colors _color);
    void setWeight(float _weight);
    void setVariety(char* _variety);
    void setPosition(int x, int y);

    E_Sizes getSize();
    float getWeight();
    E_Colors getColor();
    int getPositionX();
    int getPositionY();
    char* getVariety();

    void ripen();
    void rotten();
    void show_info();
    void move_to(int _x, int _y);

    ~C_Apple();
private:  
    float _weight;

    char* _variety;

    E_Colors _color;
    E_Sizes _size;

    S_Position _position;    
};
