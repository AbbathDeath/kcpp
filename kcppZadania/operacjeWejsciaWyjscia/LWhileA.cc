#include <iostream>
using namespace std;

/*
* Zadanie 4.14
------------------------------------
Zmodyfikuj program ZadStudent/LWhileA.cc, aby zliczał również liczbę wprowadzonych wartości.
Dodaj sprawdzanie, czy podana liczba jest dodatnia – jeśli nie, program ma wypisać komunikat.
 *
 */

int main() {
  int liczba, suma = 0;
  int licznik = 0;


  cout << "Wprowadzaj liczby (0 konczy program):" << endl;
  cin >> liczba;

  while (liczba != 0) {
    if (liczba < 0) {
      cout << "liczba jest ujemna" << endl;
    }
    suma += liczba;
    licznik++;

    cin >> liczba;
  }

  cout << "Suma wprowadzonych liczb: " << suma << endl;
  cout << "Liczba wprowadzonych liczb: " << licznik << endl;


  return 0;
}