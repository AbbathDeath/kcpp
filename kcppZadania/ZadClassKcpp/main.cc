#include "ZadMetodyAbstrakcyjne.h"
#include <iostream>



int main() {
  int wybor;


  do {
    std::cout << "Prosze wybrać zadanie z listy i podać numer zadania" << std::endl;
    std::cout << "1. Metody abstrakcyjne" << std::endl;
    std::cout << "0. Wyjście" << std::endl;
    std::cin >> wybor;

    switch (wybor) {
      case 0:
        break;

      case 1: {
        ZadMetodyAbstrakcyjne obj1;
        std::cout << obj1.Opis() << std::endl;
        obj1.Uruchom();
        break;
      }

      default:
        std::cout << "Niepoprawny numer zadania" << std::endl;
        break;
    }
  }
  while (wybor != 0);
}