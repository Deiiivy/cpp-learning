// encontrar el numero que mas se repite en un array o vector

#include <iostream>

void findNumber(int arr[], int tamaño){
  int counter = 0;
  int maxCounter = 0, numDef;
  for(int i = 0; i < tamaño; i++) {
    maxCounter = 0;
    for(int j = 0; j < tamaño; j++ ){ 
      if(arr[i] == arr[j]){
      maxCounter++;
      if(maxCounter > counter){
        counter = maxCounter;
        numDef = arr[i];
      }
      }
      }
    }
  
  std::cout << numDef << std::endl;
  std::cout << "el numero que mas se repite es " << numDef << " con una cantidad de: " << counter << std::endl;
}

int main() {

  int arr[] = {66,1,2,3,4,5,6,7,8,9,1,2,1,1,1,2,3,4,2,9,8,2,11,2,6,2,2,1,3};

  int tamaño = sizeof(arr) / sizeof(arr[0]);
  
  findNumber(arr,tamaño);


  return 0;
}
