#include <iostream>
using namespace std;

class Wektor {
    public:
    int getX() { return pv_x; }
    int getY() { return pv_y; }
    int getZ() { return pv_z; }
    void Print();
    Wektor(int x, int y, int z);
    ~Wektor();

    private:
    int pv_x = 0; //pv - private
    int pv_y = 0;
    int pv_z = 0;
};

Wektor::Wektor(int x, int y, int z) {
    pv_x = x;
    pv_y = y;
    pv_z = z;
};

Wektor::~Wektor() {};

void Wektor::Print() {
    cout << "Wektor: x: " << pv_x << ", y: " << pv_y << ", z: " << pv_z << endl;
};

int main() {
    Wektor wektor(1,2,3);
    wektor.Print();

};



