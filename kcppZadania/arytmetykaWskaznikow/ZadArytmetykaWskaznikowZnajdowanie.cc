#include <iostream>

/*

Zadanie 3.3
-------------------------------------
Napisz program znajdujący największy element w tablicy przy użyciu wskaźników
Napisz funkcję maxElement, która przyjmuje wskaźnik na tablicę liczb oraz jej rozmiar i zwraca wskaźnik do największego elementu.
Nazwa: ZadArytmetykaWskaznikowZnajdowanie.cc
 */

int* MaxElement(int* tablica, int rozmiar) {
    int* max = &tablica[0];
    for (int i = 0; i < rozmiar; i++) {
        if (*(tablica + i) > *max) {
            max = &tablica[i];
        }
    }
    return max;
}

int main() {
    int tablica[] = {-1,5,34,2,85,9};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
    int* wynik = MaxElement(tablica, rozmiar);
    std::cout << "Najwiekszy element tablicy: "<< *wynik << std::endl;
}