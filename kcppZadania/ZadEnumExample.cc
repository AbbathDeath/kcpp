// Zadanie 1.0
// --------------------------------------
// Napisać krótki program oparty na pliku LTypeEnumerated.cc,
//
// zawierający przykład użycia typu enum (scoped lub unscoped,
// z miesiącami)
// - nazwać program: ZadEnumExample.cc


#include <iostream>
using namespace std;

enum Miesiecy {
    styczen = 1,
    luty,
    marzec,
    kwiecien,
    maj,
    czerwiec,
    lipiec,
    sierpien,
    wrzesien,
    pazdziernik,
    listopad,
    grudzien
};




int main() {
    int liczba;
    cout << "Podaj liczbe miesiecy (1-12): ";
    cin >> liczba;

    Miesiecy miesiac = static_cast<Miesiecy>(liczba);

    if (miesiac == styczen or miesiac == luty or miesiac == grudzien) {
        cout << "Zima" << endl;
    }

    else if (miesiac == marzec or miesiac == kwiecien or miesiac == maj) {
        cout << "Wiosna" << endl;
    }

    else if (miesiac == czerwiec or miesiac == lipiec or miesiac == sierpien ) {
        cout << "Lato" << endl;
    }

    else if (miesiac == wrzesien or miesiac == pazdziernik or miesiac == listopad) {
        cout << "Jesien" << endl;
    }

};