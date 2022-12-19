#include <iostream>
#include "kbd.h"
#include "ram.h"

void input(){
    const int size = 8;
    int arr[size];
    
    for (int i = 0; i < size; i++){
        std::cout << "Enter number #" << i + 1 << ": ";
        std::cin >> arr[i];
    }
    write(arr, size);
}
