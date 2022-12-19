#include "ram.h"

const int size = 8;
int buffer[size]{0};


void write(int* arr, const int size){
    for(int i = 0; i < size; i++){
        buffer[i] = arr[i];
    }
};

void read(int* arr, const int size){
    for(int i = 0; i < size; i++){
        arr[i] = buffer[i];
    }
};