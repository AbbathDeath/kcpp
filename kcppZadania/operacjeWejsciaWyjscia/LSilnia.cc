#include <iostream>
using namespace std;

/*
*
Zadanie 4.12
-------------------------------------
Dodaj do programu ZadStudent/LSilnia.cc sprawdzanie, czy podana liczba jest większa lub równa zero (silnia jest zdefiniowana tylko dla liczb nieujemnych).
Zmodyfikuj program, aby obliczał sumę silni od 1 do n.
 *
 *
 */

int main() {
  int liczba;
  long long silnia = 1; // long long, aby uniknąć przepełnienia
  long long sumaSilni = 0;


  cout << "Podaj liczbe do obliczenia silni: ";
  cin >> liczba;

  if (liczba < 0) {
    cerr << "Silnia jest zdefiniowana tylko dla liczb nieujemnych" << endl;
  }

  else {
    for (int i = 1; i <= liczba; i++) {
      silnia *= i;
      sumaSilni = sumaSilni + silnia;
    }

    cout << "Silnia z " << liczba << " wynosi: " << silnia << endl;
  }


  return 0;
}