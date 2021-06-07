#include <iostream>
#include "C_Apple.h"

int main()
{
    C_Apple apple;
    apple.show_info();
    apple.ripen();
    apple.show_info();
    apple.rotten();
    apple.show_info();
    std::cout << apple.getVariety();
}