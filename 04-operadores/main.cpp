#include <iostream>

int main() {
    int a, b;

    std::cout << "Ingresa dos números: ";
    std::cin >> a >> b;

    std::cout << "Suma: " << (a + b) << std::endl;
    std::cout << "Resta: " << (a - b) << std::endl;
    std::cout << "Multiplicación: " << (a * b) << std::endl;
    std::cout << "División: " << (a / b) << std::endl;
    std::cout << "Módulo: " << (a % b) << std::endl;

    return 0;
}

