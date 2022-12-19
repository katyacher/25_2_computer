#include "gpu.h"
#include <iostream> 
#include "ram.h"


void display(){
  const int size = 8;
  int arr[size];
    
  read(arr, size);
  for (int i = 0; i < size; i++){
    std::cout << arr[i] << " ";
  }
}