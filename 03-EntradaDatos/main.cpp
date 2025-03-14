#include <iostream>
#include <string>

int main() {
    std::string nombre;
    int edad;

    std::cout << "Ingresa tu nombre: ";
    std::getline(std::cin, nombre);

    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;

    std::cout << "Hola, " << nombre << ". Tienes " << edad << " años." << std::endl;

    return 0;
}

