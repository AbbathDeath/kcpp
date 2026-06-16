#include "ZadMetodyAbstrakcyjne.h"
#include "ZadKlasaKonstruktor.h"
#include "ZadPrzekazywanieArgumentow.h"
#include "ZadParzystosc.h"
#include "ZadPrzeciazaniePotega.h"
#include <iostream>




int main() {
  int wybor;


  do {
    std::cout << "Proszę wybrać zadanie z listy i podać numer zadania" << std::endl;
    std::cout << "1. Metody abstrakcyjne" << std::endl;
    std::cout << "2. Przyklady konstruktorów klasy" << std::endl;
    std::cout << "3. Parzystość liczb" << std::endl;
    std::cout << "4. Przekazywanie argumentów" << std::endl;
    std::cout << "5. Potega liczb calkowitych i  zmiennoprzecinkowych" << std::endl;

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

      case 2: {
        ZadKlasaKonstruktor obj1;
        std::cout << obj1.Opis() << std::endl;
        obj1.Uruchom();
        break;
      }

      case 3: {
        ZadParzystosc obj1;
        std::cout << obj1.Opis() << std::endl;
        obj1.Uruchom();
        break;
      }

      case 4: {
        ZadPrzekazywanieArgumentow obj1;
        std::cout << obj1.Opis() << std::endl;
        obj1.Uruchom();
        break;
      }

      case 5: {
        ZadPrzeciazaniePotega obj1;
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
  return 0;
}
