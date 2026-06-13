#include <iomanip>
#include <iostream>

/*
*
Zadanie 4.2
--------------------------------------
Napisz program pokazujący funkcjonalność:
- wypisywania na ekran,
- +zapisywanie do strumienia błędów
//- zapisywania do pliku,
//- odczytywania z pliku,
- nazwać program: ZadCinCoutFile.cc

 *
 *
 */

int main() {
 int a,b, wynik;

 std::cout << "Podaj pierwsza liczbe: " << std::endl;
 std::cin >> a;
 std::cout << "Podaj druga liczbe: " << std::endl;
 std::cin >> b;

 if (b == 0) {
  std::cerr << "Nie mozna dzielic na zero" << std::endl;
 }

 else {
  wynik = a / b;
  std::cout << wynik << std::endl;
 }

 return 0;
}