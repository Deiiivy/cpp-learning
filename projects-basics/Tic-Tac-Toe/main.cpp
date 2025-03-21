#include <algorithm>
#include <iostream>
#include <string>


int main () {
  std::string matrix[3][3];
  int TurnPlayer1;
  int TurnPlayer2;

  std::cout << "TIC TAC TOE" << std::endl;


  for(int i = 0; i < 10; i++){
    std::cout << "Turno: " << i << "\n" 
  }

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++) {
      std::cout ""
    }
  }
  }
  


   std::cout << "\nMatriz ingresada:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
  return 0;
}

/*
-pedir la pocision al jugador del primer turno en la matriz
-llenar la matriz con esa entrada
-para validar si gano se debe validar filas, diagonales, y columnas:
validar esto y aprobar la win y en esa fila los datos son todos
del mismo usuario
-

*/
