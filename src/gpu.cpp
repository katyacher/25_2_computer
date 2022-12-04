#include "gpu.h"
#include <iostream> 
#include "ram.h"


void display(){
  for (int i = 0; i < 8; i++){
    std::cout << buffer[i] << " ";
  }
}