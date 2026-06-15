#include <iostream>

/*
* Zadanie 4.11
-------------------------------------
Zmodyfikuj program LFor.cc, aby wypisywał liczby nieparzyste zamiast parzystych.
Dodaj kolejną pętlę, która wypisze liczby podzielne przez 7.
Nazwij program: ZadStudent/ZadForA.cc
 *
 */

using namespace std;

int main() {
  int n;
  cout << "Podaj liczbe n: ";
  cin >> n;

  cout << "Liczby nieparzyste od 1 do " << n << ":" << endl;
  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      cout << i << " ";
    }
  }

  cout << "\nLiczby podzielne przez 7 od 1 do " << n << ":" << endl;
  for (int i = 1; i <= n; i++) {
    if (i % 7 == 0) {
      cout << i << " ";
    }
  }

  return 0;
}