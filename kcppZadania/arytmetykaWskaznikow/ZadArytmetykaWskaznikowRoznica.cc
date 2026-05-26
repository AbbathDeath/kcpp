#include <iostream>

/*
*Napisz program: Różnica między dwoma wskaźnikami
Stwórz program, który definiuje tablicę 10 liczb całkowitych, a następnie oblicza różnicę między dwoma wskaźnikami wskazującymi na różne elementy tej tablicy.
Nazwa: ZadArytmetykaWskaznikowRoznica.cc

 */

int main() {

 int tablica [] = {1,2,3,4,5,6,7,8,9,10};
 int* ptr = &tablica[4];
 int* ptr2 = &tablica[9];

 std::cout << "Roznica miedzy dwoma wskaznikami: "<< ptr2 - ptr << std::endl;
}c