#include <iostream>

/*
Zadanie 4.7
--------------------------------------
Napisz program sprawdzający czy liczba jest parzysta/nieparzysta:
- trzy funkcje:
  (a) w jednej sprawdzamy z wykorzystaniem operacji bitowych (&);
  (b) w drugiej inaczej (eg. modulo)
  (c) w trzeciej sprawdzenie z użyciem operatora warunkowego zamiast if (lub jako warunek w if: TRUE || FALSE; (... ? 0 : 1))
  - w kodzie funkcji (a) proszę rozpisać jako komentarz przykładowe sprawdzenie
- nazwać program: ZadParzysta.cc

*/

void czyParzystaBitowe(int liczba) {
  int wynik = liczba & 1;
  if (wynik == 0) {
    std::cout << "Liczba jest parzysta" << std::endl;
  }

  else {
    std::cout << "Liczba jest nieparzysta" << std::endl;
  }

  /*
   * Bierzemy liczbę 12, która w postaci dwójkowej ma wartość 1100.
   * Liczba 1 w systemie dwójkowym ma postać 0001
   * Potem wykonujemy operacje bitowe z liczbą 1 i patrzymy na ostatni bit
   * Jeżeli ostatni bit jest równy 0, to liczba jest parzysta, jezeli ostatni bit jest równy 1, to liczba jest nieparzysta
   */
}

void czyParzystaModulo(int liczba) {
  if (liczba % 2 == 0) {
    std::cout << "Liczba jest parzysta" << std::endl;
  }


  else {
    std::cout << "Liczba jest nieparzysta" << std::endl;
  }
}

void czyParzystaWarunkowe(int liczba) {
    liczba % 2 == 0 ? std::cout << "Liczba jest parzysta" : std::cout << "Liczba jest nieparzysta" << std::endl;
}

int main() {
  int liczba;
  std::cout << "Podaj liczbe: " << std::endl;
  std::cin >> liczba;
  czyParzystaBitowe(liczba);
  czyParzystaModulo(liczba);
  czyParzystaWarunkowe(liczba);
  return 0;
}