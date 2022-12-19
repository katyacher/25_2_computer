#include <iostream>
#include "kbd.h"
#include "ram.h"

void input(){
    int arr[8];
    const int size = 8;
    for (int i = 0; i < size; i++){
        std::cout << "Enter number #" << i + 1 << ": ";
        std::cin >> arr[i];
    }
    write(arr, size);
}
