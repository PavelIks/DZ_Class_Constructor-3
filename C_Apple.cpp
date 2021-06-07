#include "C_Apple.h"
#include <iostream>

C_Apple::C_Apple()
{
    this->_color = E_Colors::COLOR_GREEN;
    this->_size = E_Sizes::SIZE_SMALL;
    this->_weight = 200;
    this->_variety = (char*)"Test";
    this->_position.x = 0;
    this->_position.y = 0;
}

C_Apple::C_Apple(E_Colors _color, E_Sizes _size, float _weight, char* _variety, int _x, int _y)
{
    this->_color = _color;
    this->_size = _size;
    this->_weight = _weight;
    this->_variety = _variety;
    this->_position.x = _x;
    this->_position.y = _y;
}

void C_Apple::show_info()
{
    std::cout << "Color:\t";
    if (_color == 1)
    {
        std::cout << "green";
    }
    else if (_color == 2)
    {
        std::cout << "red";
    }
    else if (_color == 3)
    {
        std::cout << "yellow";
    }
    else
    {
        std::cout << "brown";
        std::cout << "\nSize:\t";
    }
    if (_size == 1)
    {
        std::cout << "small";
    }
    else if (_size == 2)
    {
        std::cout << "medium";
    }
    else
    {
        std::cout << "big";
        std::cout << "\nWeight:\t" << this->_weight << "\nVariety:\t" << this->_variety
            << "\nPosition: (" << this->_position.x << ";" << this->_position.y << ")\n";
    }
}

void C_Apple::move_to(int _x, int _y)
{
    this->_position.x += _x;
    this->_position.y += _y;
}

C_Apple::~C_Apple()
{
    //delete this->_variety;
}

 void C_Apple::ripen() 
 {
     if (_color == 1 || this->_color == 3)
     {
         this->_color = E_Colors::COLOR_RED;
         this->_weight += 20;
     }
 }

 void C_Apple::rotten()
 {
     this->_color = E_Colors::COLOR_BROWN;
     this->_weight -= 0.3 * this->_weight;
 }

 void C_Apple::setColor(E_Colors _color)
 {
     this->_color = _color;
 }

 void C_Apple::setSize(E_Sizes _size)
 {
     this->_size = _size;
 }

 void C_Apple::setWeight(float _weight)
 {
     this->_weight = _weight;
 }

 void C_Apple::setPosition(int x, int y)
 {
     this->_position.x = x;
     this->_position.y = y;
 }

 void C_Apple::setVariety(char* _variety)
 {
     this->_variety = _variety;
 }

 E_Colors C_Apple::getColor()
 {
     return this->_color;
 }

 E_Sizes C_Apple::getSize()
 {
     return this->_size;
 }

 float C_Apple::getWeight()
 {
     return this->_weight;
 }

 int C_Apple::getPositionX()
 {
     return this->_position.x;
 }

 int C_Apple::getPositionY()
 {
     return this->_position.y;
 }

 char* C_Apple::getVariety()
 {
     return this->_variety;
 }