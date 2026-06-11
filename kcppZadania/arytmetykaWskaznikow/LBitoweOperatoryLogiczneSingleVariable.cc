#include <iostream>

/*
* Zadanie 3.15 (LBitoweOperatoryLogiczneB.c i ..czneC.cc)
-------------------------------------
Proszę napisać samodziely program który jako argument będzie przyjmował tablice 8
elementową, gdzie na poszczególnych pozycjach tablicy będzie 0 lub 1. Program będzie
zwracał liczbę, która w formie binarnej będzie miała ustawione 1 na pozycjach odpowiadających
pozycjom 1 w tablicy. Wystarczy zmodyfikować program LBitoweOperatoryLogiczneC.cc
- nazwać program: LBitoweOperatoryLogiczneSingleVariable.cc

 */

//Wykorzystałem z funkcji z pliku z zajęć LBitoweOperatoryLogiczne.cc

void printBinary(const unsigned char val, int range = 7) {
 for (int i = range; i >= 0; i--)
  if (val & (1 << i))
   //(1 << i) "wstawia 1 na kolejnych pozycjach"
    //(zmienna << ilosc_miejsc)
     std::cout << "1";
  else
   std::cout << "0";
}


unsigned int zwrocLiczbeBinarna(unsigned int tablica[8]) {
 unsigned int wynik = 0;
 for (int i = 0; i < 8; i++) {
  if (tablica[i] == 1) {
   wynik = wynik | (1 << i);
  }
 }
 return wynik;
}


int main() {
 unsigned int tablica[8] = {1,0,1,0,0,1,1,1};
 unsigned int wynik = zwrocLiczbeBinarna(tablica);
 std::cout << wynik << std::endl;
 printBinary(wynik, 7);

 return 0;

}
