#include "ZadArytmetykaWskPrzesuniecie.h"
#include <string>
#include <iostream>

std::string ZadArytmetykaWskPrzesuniecie::Opis() {
  return "Funkcja, która przesuwa wszystkie elementy tablicy o jedno miejsce w prawo (ostatni element przechodzi na początek), wykorzystując wskaźniki..\n";
}

void ZadArytmetykaWskPrzesuniecie::Uruchom() {
  int tablica[] = {1,2,3,4,5};
  int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

  std::cout << "Tablica do przesuniecia: ";
  for (int i = 0; i < rozmiar; i++) {
    std::cout << tablica[i] << " ";
  }
  std::cout << std::endl;

  presunElement(tablica, rozmiar);

  std::cout << "Tablica po przesunieciu: ";
  for (int i = 0; i < rozmiar; i++) {
    std::cout << tablica[i] << " ";
  }
  std::cout << std::endl;
  std::cout << std::endl;
}

void ZadArytmetykaWskPrzesuniecie::presunElement(int* tablica, int rozmiar) {
  int ostatniElement = *(tablica + (rozmiar - 1));
  for (int i = rozmiar - 1; i > 0; i--) {
    *(tablica + i) = *(tablica + (i - 1));
  }
  *tablica = ostatniElement;
}