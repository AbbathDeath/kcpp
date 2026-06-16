#include "ZadPrzeciazaniePotega.h"
#include <string>
#include <iostream>

void ZadPrzeciazaniePotega::Uruchom() {
  int x, y;
  double a, b;

  std::cout << "Proszę podać pierwszą liczbę całkowitą: " << std::endl;
  std::cin >> x;

  std::cout << "Proszę podać drugą liczbę całkowitą: " << std::endl;;
  std::cin >> y;
  std::cout << "Potega liczb calkowitych: " << potega(x,y) << std::endl;

  std::cout << "Proszę podać pierwszą liczbę zmiennoprzecinkową " << std::endl;
  std::cin >> a;

  std::cout << "Proszę podać drugą liczbę zmiennoprzecinkową" << std::endl;
  std::cin >> b;
  std::cout << "Potega liczb zmiennoprzecinkowych: " << potega(a,b) << std::endl;
}

std::string ZadPrzeciazaniePotega::Opis() {
  return "Potega liczb calkowitych i  zmiennoprzecinkowych";
}

int ZadPrzeciazaniePotega::potega(int x, int y) {
  int wynik = x;
  for (int i = 1; i <y; i++) {
    wynik = wynik * x;
  }
  return wynik;
}

double ZadPrzeciazaniePotega::potega(double x, int y) {
  double wynik = x;
  for (int i = 1; i <y; i++) {
    wynik = wynik * x;
  }
  return wynik;
}
