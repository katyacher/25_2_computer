#include <iostream>
#include "cpu.h"
#include "ram.h"


int compute(){
  int sum = 0;

  int arr[8];
  const int size = 8;

  read(arr, size);
  
  for(int i = 0; i < size; i++){
    sum += arr[i];
  }

  return sum;

}