#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int iGuess, ramdom;
    srand(time(NULL));

    do {
        std::cout << "Ingresa un número para elegir tu opción: \n";
        std::cout << "1. Piedra\n2. Papel\n3. Tijera\n4. Salir\n";
        std::cin >> iGuess;

        if (iGuess < 1 || iGuess > 4) {
            std::cout << "Ingresa un número válido.\n";
            continue;
        }

        if (iGuess == 4) {
            std::cout << "Saliendo del juego...\n";
            break;
        }

      
        ramdom = rand() % 3 + 1; 

        std::cout << "La máquina eligió: ";
        if (ramdom == 1) std::cout << "Piedra\n";
        else if (ramdom == 2) std::cout << "Papel\n";
        else std::cout << "Tijera\n";

        
        if (iGuess == ramdom) {
            std::cout << "Empate! Ingresa otra opción.\n";
        } else if ((iGuess == 1 && ramdom == 3) || 
                   (iGuess == 2 && ramdom == 1) || 
                   (iGuess == 3 && ramdom == 2)) {
            std::cout << "Ganaste!!\n";
        } else {
            std::cout << "Perdiste!!\n";
        }

    } while (true); 

    return 0;
}

