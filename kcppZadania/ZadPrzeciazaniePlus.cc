#include <iostream>
class Punkt {
    public:
    int x;
    int y;

    Punkt(int x, int y) {
        this->x = x;
        this->y = y;
    }
    Punkt operator+(Punkt punkt) {
        punkt.x += x;
        punkt.y += y;
        return punkt;
    }
};

int main () {
    Punkt punkt1(10,20), punkt2(20,30);
    Punkt punkt3 = punkt1 + punkt2;
    std::cout << "x: " << punkt3.x << " y: " << punkt3.y << std::endl;
    return 0;
}