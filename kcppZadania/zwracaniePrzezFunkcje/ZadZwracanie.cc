#include <iostream>
#include <vector>


int zwracaniePrzezWartosc(int x) {
    int wynik =  x * x;
    return wynik;
}



int zwracaniePrzezReferencje(int &x) {
    int wynik = x * x;
    return wynik;
}

int zwracaniePrzezWskaznik(int *x) {
    int wynik = (*x) * (*x);
    return wynik;
}

void zwracanieTablicy(std:: vector<int> liczby) {
    for (int i = 0; i < liczby.size(); i++) {
        std:: cout << liczby[i] << std:: endl;
    }
}


int main() {
    int a = 2;
    std:: cout << "Przez wartosc: " << zwracaniePrzezWartosc(a) << std:: endl;
    std:: cout << "Prez referencje: " << zwracaniePrzezReferencje(a) << std::endl;
    std:: cout << "Przez wskaznik: " << zwracaniePrzezWskaznik(&a) << std::endl;
    std:: cout << "Tablica: " << std::endl;
    std:: vector<int> liczby { 1, 2, 3, 4, 5 };
    zwracanieTablicy(liczby);

    return 0;

}

