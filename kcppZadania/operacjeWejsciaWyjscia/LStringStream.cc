#include <iostream>
#include <sstream>
#include <string>

int main() {
  std::string string = "Onimusha 1 69.99";
  std::string nazwa;
  int ilosc;
  double cena;

  std::cout << "Dane wejsciowe: " << " " << string << std::endl;

  std::stringstream stream;
  stream << string;

  stream >> nazwa;
  stream >> ilosc;
  stream >> cena;

  std::cout << "Nazwa: "<< nazwa << std::endl;
  std::cout << "Ilosc: "<< ilosc << std::endl;
  std::cout << "Cena: "<< cena << std::endl;
  return 0;
}