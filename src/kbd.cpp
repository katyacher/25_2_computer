#include <iostream>
#include "kbd.h"
#include "ram.h"

void input(){
    for (int i = 0; i < 8; i++){
        std::cout << "Enter number #" << i + 1 << ": ";
        std::cin >> buffer[i];
    }
}
