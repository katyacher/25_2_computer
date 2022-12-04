#include <iostream>
#include <fstream>
#include "disk.h"
#include "ram.h"

void save()
{
    std::ofstream disk("disk.txt", std::ios::binary);

    if (disk.is_open()){
        disk.write((char*)buffer, sizeof(buffer));
    } else {
        std::cout << "File not open." << std::endl;
    }
    disk.close();
}

void load()
{
    std::ifstream disk("disk.txt", std::ios::binary);

    if (disk.is_open()){
        disk.read((char*)buffer, sizeof(buffer));
    } else {
        std::cout << "File not open." << std::endl;
    }
    disk.close();
}
