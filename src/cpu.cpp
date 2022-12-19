#include <iostream>
#include "cpu.h"
#include "ram.h"


int compute(){
  int sum = 0;

  const int size = 8;
  int arr[size];

  read(arr, size);

  for(int i = 0; i < size; i++){
    sum += arr[i];
  }

  return sum;

}