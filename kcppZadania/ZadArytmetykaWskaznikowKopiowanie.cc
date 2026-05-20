#include <iostream>

/*

Zadanie 3.6
-------------------------------------
Napisz program do kopiowanie tablicy przy użyciu wskaźników.
Napisz funkcję kopiujTablice, która kopiuje jedną tablicę do drugiej, korzystając wyłącznie ze wskaźników.
Nazwa: ZadArytmetykaWskaznikowKopiowanie.cc


*/


void kopiujTablice(int* tablicaPoczatkowa, int* tablicaDocelowa, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        *(tablicaDocelowa + i) = *(tablicaPoczatkowa + i);
    }
}

int main () {

    int tablicaPoczatkowa [5] = {8, 9, 10, 11,12};
    int tablicaDocelowa [5] = {};
    int rozmiar =  sizeof(tablicaPoczatkowa) / sizeof(tablicaPoczatkowa[0]);

    kopiujTablice(tablicaPoczatkowa, tablicaDocelowa, rozmiar);

    std:: cout << "Tablica Docelowa: " << " ";

    for (int i = 0; i < rozmiar; i++) {
        std:: cout << tablicaDocelowa[i] << " ";
    }
    std:: cout << std::endl;
    return 0;
}