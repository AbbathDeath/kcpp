#include "ZadMetodyAbstrakcyjne.h"
#include "ZadKlasaKonstruktor.h"
#include "ZadPrzekazywanieArgumentow.h"
#include "ZadParzystosc.h"
#include "ZadPrzeciazaniePotega.h"
#include "ZadArytmetykaWskZamiana.h"
#include "ZadArytmetykaWskSuma.h"
#include "ZadArytmetykaWskPrzesuniecie.h"
#include "ZadArytmetykaWsk.h"
#include "ZadBazaStudentow.h"
#include <iostream>

#include "ZadArytmetykaWskPrzesuniecie.h"


int main() {
  int wybor;


  do {
    std::cout << "Proszę wybrać zadanie z listy i podać numer zadania\n" << std::endl;
    std::cout << "1. Metody abstrakcyjne" << std::endl;
    std::cout << "2. Przyklady konstruktorów klasy" << std::endl;
    std::cout << "3. Parzystość liczb" << std::endl;
    std::cout << "4. Przekazywanie argumentów" << std::endl;
    std::cout << "5. Potega liczb calkowitych i  zmiennoprzecinkowych" << std::endl;
    std::cout << "6. Zamiana miejscami dwóch liczb za pomocą wskaźników" << std::endl;
    std::cout << "7. Dodawanie elementów tablicy za pomocą wskażników" << std::endl;
    std::cout << "8. Przesunięcie elementów tablicy za pomocą wskażników" << std::endl;
    std::cout << "9. Arytmetyka wskażników"<< std::endl;
    std::cout << "10. Prosta baza danych studentów" << std::endl;

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
      case 6: {
        ZadArytmetykaWskZamiana obj1;
        std::cout << obj1.Opis() << std::endl;
        obj1.Uruchom();
        break;
      }
      case 7: {
        ZadArytmetykaWskSuma obj1;
        std::cout << obj1.Opis() << std::endl;
        obj1.Uruchom();
        break;
      }
      case 8: {
        ZadArytmetykaWskPrzesuniecie obj1;
        std::cout << obj1.Opis() << std::endl;
        obj1.Uruchom();
        break;
      }
      case 9: {
        ZadArytmetykaWsk obj1;
        std::cout << obj1.Opis() << std::endl;
        obj1.Uruchom();
        break;
      }

      case 10: {
        ZadBazaStudentow obj1;
        std::cout << obj1.Opis() << std::endl;
        obj1.Uruchom();
        break;
      }
      default:
        std::cout << std::endl;
        std::cout << "Niepoprawny numer zadania\n" << std::endl;
        break;
    }
  }
  while (wybor != 0);
  return 0;
}
