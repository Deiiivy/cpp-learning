#include <iostream>
#include <string>
#include "functions.h"
#include <vector>

int main() {
    std::cout << "AGENDA DE CONTACTOS!!" << std::endl;
    std::vector<Contact> contacts;

    char opcion;
    do {
        Contact c;
        std::cout << "Ingrese el nombre de la persona a agendar:\n ";
        std::cin.ignore();
        std::getline(std::cin, c.name);
        std::cout << "Ingrese el telefono de la persona a agendar:\n ";
        std::cin >> c.phone;

        contacts.push_back(c);

        std::cout << "¿Desea ingresar otro contacto? (s/n): ";
        std::cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    std::string nameFile = "contacts.txt";

    SaveInTheFile(contacts, nameFile);
    ReadFile(nameFile);

    return 0;
}
