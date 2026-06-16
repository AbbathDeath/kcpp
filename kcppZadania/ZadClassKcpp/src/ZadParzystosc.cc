#include "ZadParzystosc.h"
#include <iostream>
#include <string>

std::string ZadParzystosc::Opis() {
  return "Program sprawdzający czy liczba jest parzysta/nieparzysta:\n";
}

void ZadParzystosc::Uruchom() {
  int liczba;
  int wybor;
  std::cout << "Proszę podać liczbe: ";
  std::cin >> liczba;
  std::cout << "Proszę wybrać numer od 1 do 3 " << std::endl;
  std::cout << "1. Sprawdzanie za pomocą operacji bitowych" << std::endl;
  std::cout << "2. Sprawdzanie za pomocą modulo" << std::endl;
  std::cout << "3. Sprawdzanie za pomocą operatora warunkowego" << std::endl;
  std::cin >> wybor;

  switch (wybor) {
    case 1:
      czyParzystaBitowe(liczba);
      break;

    case 2:
      czyParzystaModulo(liczba);
      break;

    case 3:
      czyParzystaWarunkowe(liczba);
      break;

    default:
      std::cout << "Niepoprawny numer" << std::endl;
  }
}

void ZadParzystosc::czyParzystaBitowe(int liczba) {
  int wynik = liczba & 1;
  if (wynik == 0) {
    std::cout << "Liczba jest parzysta" << std::endl;
    std::cout << std::endl;
  }


  else {
    std::cout << "Liczba jest nieparzysta" << std::endl;
    std::cout << std::endl;
  }

}

void ZadParzystosc::czyParzystaModulo(int liczba) {
  if (liczba % 2 == 0) {
    std::cout << "Liczba jest parzysta" << std::endl;
    std::cout << std::endl;
  }


  else {
    std::cout << "Liczba jest nieparzysta" << std::endl;
    std::cout << std::endl;
  }
}

void ZadParzystosc::czyParzystaWarunkowe(int liczba) {
  liczba % 2 == 0 ? std::cout << "Liczba jest parzysta" : std::cout << "Liczba jest nieparzysta" << std::endl;
  std::cout << std::endl;
}

