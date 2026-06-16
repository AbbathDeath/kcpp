#include "ZadArytmetykaWskSuma.h"
#include <string>
#include <iostream>

std::string ZadArytmetykaWskSuma::Opis() {
  return "Funkcję suma, która przyjmuje wskaźnik do tablicy liczb całkowitych oraz jej rozmiar, a następnie zwraca sumę jej elementów.\n";
}

void ZadArytmetykaWskSuma::Uruchom() {
  int tablica[] = {2,5,7};
  std::cout << "Tablica ";
  for (int i = 0; i < 3; i++) {
    std::cout << tablica[i];
  }
  std::cout << std::endl;
  int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
  int wynik = suma(tablica, rozmiar);
  std::cout << "Suma elementow tablicy: "<< wynik << std::endl;
  std::cout << std::endl;
}



int ZadArytmetykaWskSuma::suma(int* tablica, int rozmiar) {
  int suma = 0;
  for (int i = 0; i < rozmiar; i++) {
    suma += *(tablica + i);
  }
  return suma;
}
