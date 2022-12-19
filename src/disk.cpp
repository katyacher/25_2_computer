#include <iostream>
#include <fstream>
#include "disk.h"
#include "ram.h"

void save()
{
    const int size = 8;
    int arr[size];
    
    read(arr, size);
    std::ofstream disk("disk.txt", std::ios::binary);

    if (disk.is_open()){
        disk.write((char*)arr, size);
    } else {
        std::cout << "File not open." << std::endl;
    }
    disk.close();
}

void load()
{
    const int size = 8;
    int arr[size];
    
    std::ifstream disk("disk.txt", std::ios::binary);

    if (disk.is_open()){
        disk.read((char*)arr, size);
    } else {
        std::cout << "File not open." << std::endl;
    }
    disk.close();

    write(arr, size);
}
