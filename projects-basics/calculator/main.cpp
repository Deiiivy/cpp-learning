#include <iostream>

auto suma(int a, int b) { return a + b; }
auto resta(int a, int b) { return a - b; }
auto multiplicacion(int a, int b) { return a * b; }
auto division(int a, int b) { 
    return (b != 0) ? a / b : 0; 
}

void pedirNumeros(int &a, int &b) {
    std::cout << "Ingresa el primer número: ";
    std::cin >> a;
    std::cout << "Ingresa el segundo número: ";
    std::cin >> b;
}

int main() {
    int option, a, b;
    
    do {
        std::cout << "\n!!Calculadora!!\n";
        std::cout << "1: Suma\n2: Resta\n3: Multiplicación\n4: División\n5: Salir\n";
        std::cout << "Elige una opción: ";
        std::cin >> option;

        if (option >= 1 && option <= 4) {
            pedirNumeros(a, b);
        }

        switch (option) {
            case 1: std::cout << "Resultado: " << suma(a, b) << "\n"; break;
            case 2: std::cout << "Resultado: " << resta(a, b) << "\n"; break;
            case 3: std::cout << "Resultado: " << multiplicacion(a, b) << "\n"; break;
            case 4:
                if (b == 0) {
                    std::cout << "Error: No se puede dividir por cero.\n";
                } else {
                    std::cout << "Resultado: " << division(a, b) << "\n";
                }
                break;
            case 5: std::cout << "Saliendo...\n"; break;
            default: std::cout << "Opción inválida, intenta de nuevo.\n"; break;
        }

    } while (option != 5);

    return 0;
}

