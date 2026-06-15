#include <iostream>
using namespace std;

/*
*
Zadanie 4.13
-------------------------------------
Zmodyfikuj program ZadStudent/LKsztalt.cc, aby rysował trójkąt równoramienny.
Dodaj pętlę, która narysuje "piramidę" z liczb (np. 1, 2 2, 3 3 3).
 */

int main() {
  int rozmiar;
  cout << "Podaj rozmiar kwadratu: ";
  cin >> rozmiar;

  cout << "\nKwadrat:" << endl;
  for (int i = 0; i < rozmiar; i++) {
    for (int j = 0; j < rozmiar; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  cout << "\nTrojkat równoramienny:" << endl;
  for (int i = 0; i < rozmiar; i++) {
    for (int j = 0; j < rozmiar - 1 - i; j++) {
      cout << " ";
    }

    for (int j = 0; j < 2 *  i + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }

  cout << "\nPiramida:" << endl;
  for (int i = 0; i <= rozmiar; i++) {
    for (int j = 0; j < i; j++) {
      cout << i << " ";
    }
    cout << endl;
  }

  return 0;
}