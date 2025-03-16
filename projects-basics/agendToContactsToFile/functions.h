#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <vector>

struct Contact {
  std::string name;
  int phone;
};

void SaveInTheFile(const std::vector<Contact>& contacts, std::string nameFile);
void ReadFile(const std::string &nameFile);

#endif // !
