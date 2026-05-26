#include <iostream>

/*
Zadanie 3.2
-------------------------------------
Napisz program do sumowania elementów tablicy za pomocą wskaźników
Stwórz funkcję suma, która przyjmuje wskaźnik do tablicy liczb całkowitych oraz jej rozmiar, a następnie zwraca sumę jej elementów.
Nazwa: ZadArytmetykaWskaznikowSuma.cc
 */

int suma(int* tablica, int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += *(tablica + i);
    }
    return suma;
}


int main () {
    int tablica[] = {2,5,7};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
    int wynik = suma(tablica, rozmiar);
    std::cout << "Suma elementow tablicy: "<< wynik << std::endl;

    return 0;
}