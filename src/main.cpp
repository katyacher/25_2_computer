#include <string>
#include <iostream>
#include "ram.h"
#include "cpu.h"
#include "kbd.h"
#include "gpu.h"
#include "disk.h"


int main(){
    std::string command;

    while (command != "exit"){
        std::cout << "Enter the command: ";
        std::cin >> command;
        if (command == "exit"){
            break;
        } else if (command == "sum"){
            std::cout << "Sum = " << compute() << std::endl;
        } else if (command == "save"){
            save();
        } else if (command == "load"){
            load();
        } else if (command == "input"){
            input();
        } else if (command == "display"){
            display();
            std::cout << std::endl;
        } else {
            std::cout << "Unknown commad." << std::endl;
        }
    }
    return 0;
}