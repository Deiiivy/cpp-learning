#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "functions.h"

void SaveInTheFile(const std::vector<Contact>& contacts, std::string nameFile) {
    std::ofstream archivo(nameFile, std::ios::app);
    if (archivo) {
        for (const Contact& contact : contacts) {
            archivo << contact.name << '\n' << contact.phone << '\n';
        }
        archivo.close();
        std::cout << "Datos guardados.\n";
    } else {
        std::cerr << "Error al abrir el archivo.\n";
    }
}

void ReadFile(const std::string& nameFile) {
    Contact c;
    std::ifstream archivo(nameFile);
    if (archivo) {
        std::cout << "\nLista de contactos:\n";
        while (std::getline(archivo, c.name) && archivo >> c.phone) {
            archivo.ignore();
            std::cout << "Nombre: " << c.name << ", Teléfono: " << c.phone << '\n';
        }
        archivo.close();
    } else {
        std::cerr << "Error al leer archivo.\n";
    }
}

