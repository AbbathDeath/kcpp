#include "ZadArytmetykaWskZamiana.h"
#include <string>
#include <iostream>

void ZadArytmetykaWskZamiana::Uruchom() {
  int a = 5;
  int b = 10;
  ZmienMiejscamiWartosci(&a, &b);
}

std::string ZadArytmetykaWskZamiana::Opis() {
  return "Zamiana miejscami dwóch liczb za pomocą wskaźników";
}

void ZadArytmetykaWskZamiana::ZmienMiejscamiWartosci(int* a, int* b) {
  std::cout << "Do zmiany: " << std::endl;
  std::cout << "A: " << *a << std::endl;
  std::cout << "B: " << *b << std::endl;

  int temp = *a;
  *a = *b;
  *b = temp;

  std::cout << "Po zmianie: ";
  std::cout << *a << std::endl;
  std::cout << "Po zmiane: ";
  std::cout << *b << std::endl;
}