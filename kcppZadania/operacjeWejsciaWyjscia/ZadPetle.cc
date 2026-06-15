#include <iostream>
#include <iomanip>
/*
Zadanie 4.9
--------------------------------------
Napisz program pokazujący działanie instrukcji (każda jako osobna funkcja; trzy funkcje od a do c):
(a) while    (pokazujące while z inkrementacją: i++, ++i)
(b) do-while (pokazujące do-while z inkrementacją: i++, ++i)
(c) for
- wykorzystaj: break, continue, return
- nazwać program: ZadPetle.cc
 */


void petlaWhile(int liczba) {
 int i = 0;
 std:: cout << "Pętla while (pokazujące while z inkrementacją: i++" << std::endl;
 while (i < liczba) {
  std::cout << i << std::endl;
  i++;

 }
 i = 0;

 std:: cout << std::setfill(' ') << std::endl;
 std:: cout << "Pętla while (pokazujące while z inkrementacją: ++i" << std::endl;
 while (i < liczba) {
  ++i;
  std::cout << i << std::endl;
 }


 i = 0;
 std:: cout << std::setfill(' ') << std::endl;
 std:: cout << "Pętla while razem z break" << std::endl;

 while (i < liczba) {
  if (i == 5) {
   break;
  }
  std::cout << i << std::endl;
  i++;
 }
}


void petlaDoWhile(int liczba) {
 int i = 0;

 std:: cout << "Pętla do-while (pokazujące while z inkrementacją: i++" << std::endl;
 do {
  std::cout << i << std::endl;
  i++;
 }
 while (i < liczba);

 i = 0;

 std:: cout << std::setfill(' ') << std::endl;
 std:: cout << "Pętla do - while (pokazujące while z inkrementacją: ++i" << std::endl;
 do {
  ++i;
  std:: cout << i << std::endl;
 }
 while (i < liczba);

 i = 0;
 std:: cout << std::setfill(' ') << std::endl;
 std:: cout << "Pętla do-while razem z continue" << std::endl;
 do {
  ++i;
  if (i == 5) {
   continue;
  }
  std::cout << i << std::endl;
 }
 while (i < liczba);

}

int petlaFor(int liczba) {
 int wynik = 0;
 for (int i = 0; i <= liczba; i++) {
  wynik += i;
 }
 return wynik;
}


int main() {

 int liczba = 10;
 petlaWhile(liczba);
 std:: cout << std::setfill(' ') << std::endl;
 petlaDoWhile(liczba);
 std:: cout << std::setfill(' ') << std::endl;
 int wynik = petlaFor(liczba);
 std::cout << "Pętla do-while razem z continue: " << wynik << std::endl;
 return 0;
}