#include <iostream>

double pole(int bok) {
    return bok * bok;
}

double pole(int bokA, int bokB) {
    return bokA * bokB;

}

double pole(double r) {
    return 3.14 * (r * r);

}

int main() {
    std::cout << "Pole kwadratu: "  << pole(5) << std::endl;
    std::cout << "Pole prostokata: "  << pole(4,5) << std::endl;
    std::cout << "Pole kola: "  << pole(4.0) << std::endl;
    return 0;
}