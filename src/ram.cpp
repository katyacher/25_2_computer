#include "ram.h"
#include "kbd.h"
#include "gpu.h"

int buffer[8];

void write(){
    input();
};

void read(){
    display();
};