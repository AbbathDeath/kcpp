#include <iostream>
#include <string>

using namespace std;

void Print(string str) {
    cout << str << endl;
}


void potegaKwadrat(int x) {
    int wynik =  x * x;
    cout << x << " do potegi 2" << " = " << wynik << endl;
    cout << "============="<< endl;
}

void wypiszLiczbyPodzielne() {
    for (int i = 0; i < 50; i++) {
        if (i % 7 == 0) {
            cout << i << endl;
        }
    }
    cout << "============="<< endl;

}

extern "C" void obliczPole(double szerokosc, double wysokosc) {
    double pole = szerokosc * wysokosc;
    cout << "Pole: " << pole << endl;
}

extern "C" void obliczObwod(double szerokosc, double wysokosc) {
    double obwod = 2 * (szerokosc + wysokosc) ;
    cout << "Obwod: " << obwod << endl;
}

int main() {
    Print("Hello World");
    potegaKwadrat(11);
    wypiszLiczbyPodzielne();
    obliczPole(10,12);
    obliczObwod(10,12);

};