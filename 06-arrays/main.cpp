#include <iostream>


void sumarArrNums(int nums[], int tamaño) {
  int sum = 0;
  for(int i = 0; i < tamaño; i++) {
    sum += nums[i];
  }

  std::cout << sum << std::endl;
}

int main() {
  int numeros[] = {1,2,3,4,5,6,7,8,9,10};

  int tamaño = sizeof(numeros) / sizeof(numeros[0]);

  std::cout << tamaño << std::endl;

  sumarArrNums(numeros,tamaño);
  return 0;
}
