#include "ZadPrzekazywanieArgumentow.h"
#include <iostream>
#include <string>
#include <vector>

std::string ZadPrzekazywanieArgumentow::Opis() {
  return "Przekazywanie argumentow przez wartosc, referencje i wskaznik \n";
}

void ZadPrzekazywanieArgumentow::Uruchom() {
  int a = 2;
  std:: cout << "Przez wartosc: " << zwracaniePrzezWartosc(a) << std:: endl;
  std:: cout << "Prez referencje: " << zwracaniePrzezReferencje(a) << std::endl;
  std:: cout << "Przez wskaznik: " << zwracaniePrzezWskaznik(&a) << std::endl;
  std:: cout << "Tablica: ";
  std:: vector<int> liczby { 1, 2, 3, 4, 5 };
  zwracanieTablicy(liczby);
  std:: cout << std::endl;

}

int ZadPrzekazywanieArgumentow::zwracaniePrzezWartosc(int x) {
  int wynik =  x * x;
  return wynik;
}



int ZadPrzekazywanieArgumentow::zwracaniePrzezReferencje(int &x) {
  int wynik = x * x;
  return wynik;
}

int ZadPrzekazywanieArgumentow::zwracaniePrzezWskaznik(int *x) {
  int wynik = (*x) * (*x);
  return wynik;
}

void ZadPrzekazywanieArgumentow::zwracanieTablicy(std:: vector<int> liczby) {
  for (int i = 0; i < liczby.size(); i++) {
    std:: cout << liczby[i];
  }
  std:: cout << std::endl;
}
