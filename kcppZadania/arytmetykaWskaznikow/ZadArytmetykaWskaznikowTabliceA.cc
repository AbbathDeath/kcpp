#include <iostream>

/*
*
Zadanie 3.8 (LArytmetykaWskaznikowTablice.cc)
-------------------------------------
Operacje na tablicy przy użyciu wskaźników
Napisz program, który:
- Zadeklaruje statyczną tablicę 10 liczb całkowitych i wypełni ją wartościami od 1 do 10.
- Używając wskaźników, obliczy i wyświetli sumę elementów tablicy.
- Znajdzie i wyświetli maksymalny element w tablicy używając arytmetyki wskaźników.
- Odwróci kolejność elementów w tablicy używając wyłącznie wskaźników (bez użycia indeksów []).
Nazwać program: ZadArytmetykaWskaznikowTabliceA.cc
 */

int main() {
  int tablica [10];

  for (int i = 0; i < 10; i++) {
    *(tablica + i) = i + 1 ;
  }

  std::cout << "Tablica: ";
  for (int i = 0; i < 10; i++) {
    std::cout << tablica[i] << " ";
  }
  std::cout << std::endl;

  int *ptr = tablica;
  int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

  int suma = 0;

  while (ptr != tablica + rozmiar) {
    suma += *ptr;
    ptr++;
  }

  std::cout << "Suma elementow: "<< suma << std::endl;

  int max = *tablica;

  int *ptr1 = tablica + 1;

  while (ptr1 != tablica + rozmiar) {
    if (*ptr1 > max) {
      max = *ptr1;
    }
    ptr1++;
  }

  std::cout << "Najwiekszy element: "<< max << std::endl;

}


