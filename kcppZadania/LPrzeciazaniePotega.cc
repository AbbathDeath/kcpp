#include <iostream>

int potega(int x, int y) {
    int wynik = x;
    for (int i = 1; i <y; i++) {
        wynik = wynik * x;
    }
    return wynik;
}

double potega(double x, int y) {
    double wynik = x;
    for (int i = 1; i <y; i++) {
        wynik = wynik * x;
    }
    return wynik;
}

int main() {
    std::cout << "Potega liczb calkowitych: " << potega(2,6) << std::endl;
    std::cout << "Potega liczb zmiennoprzecinkowych: " << potega(2.5,4) << std::endl;
    return 0;
}