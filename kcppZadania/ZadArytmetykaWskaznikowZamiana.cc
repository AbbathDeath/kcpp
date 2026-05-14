/*
Zadanie 3.1
-------------------------------------
Napisz program do zamiana miejscami dwóch liczb za pomocą wskaźników
Napisz funkcję zamien(int* a, int* b), która zamienia miejscami wartości przechowywane pod adresami a i b.
Nazwa: ZadArytmetykaWskaznikowZamiana.cc

*/

#include <iostream>

void ZmienMiejscamiWartosci(int* a, int* b) {
    std::cout << "Do zmiany: ";
    std::cout << "A: " << *a << std::endl;
    std::cout << "B: " << *b << std::endl;

    int temp = *a;
    *a = *b;
    *b = temp;

    std::cout << "Po zmianie: ";
    std::cout << *a << std::endl;
    std::cout << "Po zmiane: ";
    std::cout << *b << std::endl;

}

int main() {
    int a = 5;
    int b = 10;
    ZmienMiejscamiWartosci(&a, &b);
    return 0;
}