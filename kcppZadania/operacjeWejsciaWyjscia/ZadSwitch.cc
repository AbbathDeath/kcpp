#include "iostream"

/*
 * Zadanie 4.10
--------------------------------------
Napisz program wykorzystujący instrukcje 'switch' gdzie:
- zamiast pojedynczego znaku będzie sprawdzane całe słowo (czy da się to zrobić bezpośrednio?)
- program może być uszczegółowieniem/modyfikacją (zrobić kopie pliku i zmienić kopie) tego co jest w ZadParzysteCase.cc
- nazwać program: ZadSwitch.cc
 *
 */

void czyParzystaBitowe(int liczba) {
 int wynik = liczba & 1;
 if (wynik == 0) {
  std::cout << "Liczba jest parzysta" << std::endl;
 }

 else {
  std::cout << "Liczba jest nieparzysta" << std::endl;
 }

 /*
  * Bierzemy liczbę 12, która w postaci dwójkowej ma wartość 1100.
  * Liczba 1 w systemie dwójkowym ma postać 0001
  * Potem wykonujemy operacje bitowe z liczbą 1 i patrzymy na ostatni bit
  * Jeżeli ostatni bit jest równy 0, to liczba jest parzysta, jezeli ostatni bit jest równy 1, to liczba jest nieparzysta
  */
}

void czyParzystaModulo(int liczba) {
 if (liczba % 2 == 0) {
  std::cout << "Liczba jest parzysta" << std::endl;
 }


 else {
  std::cout << "Liczba jest nieparzysta" << std::endl;
 }
}

void czyParzystaWarunkowe(int liczba) {
 liczba % 2 == 0 ? std::cout << "Liczba jest parzysta" : std::cout << "Liczba jest nieparzysta" << std::endl;
}

int main() {
 int liczba;
 int wybor;
 std::string slowo;
 std::cout << "Podaj liczbe: " << std::endl;
 std::cin >> liczba;
 std::cout << "Wpisz metode małymi literami: " << std::endl;
 std::cout << "1. bitowe" << std::endl;
 std::cout << "2. modulo" << std::endl;
 std::cout << "3. warunkowe" << std::endl;
 std::cin >> slowo;

 if (slowo == "bitowe") {
  wybor = 1;
 }
 else if (slowo == "modulo") {
  wybor = 2;
 }
 else if (slowo == "warunkowe") {
  wybor = 3;
 }

 switch (wybor) {
  case 1:
   czyParzystaBitowe(liczba);
   break;

  case 2:
   czyParzystaModulo(liczba);
   break;

  case 3:
   czyParzystaWarunkowe(liczba);
   break;


  default:
   std::cout << "Następnym razem wybierz jedną z podanych metod" << std::endl;
 }
 return 0;
}