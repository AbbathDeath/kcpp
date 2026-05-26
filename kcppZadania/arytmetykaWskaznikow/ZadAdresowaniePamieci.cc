/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Arytmetyka wskaznikow (wskaznik zmienne) w C++
 * v0.01
 * TODO: add hextodec which works wit double
 */

/*

Zadanie 3.7 (LArytmetykaWskaznikowZmienne.cc)
-------------------------------------
Kierunek adresowania pamięci
- wyjaśnić w komentarzu do programu podającego przykład:
- wypisywanie adresów deklarowanych zmiennych
- nazwać program: ZadAdresowaniePamieci.cc


*/

// #include "LConversion.h"

#include <iostream>
#include <sstream>
#include <string>
// 4 includes

#include <vector>
#include <stdint.h>
#include <math.h>

using namespace std;

// in order to avoid include LConversion.h. Remember to add 4 includes
unsigned long hextodec(string hex) {
  unsigned long result = 0;
  for (unsigned int i = 0; i < hex.length(); i++) {
    if (hex[i] >= 48 && hex[i] <= 57) {
      result += (hex[i] - 48) * pow(16, hex.length() - i - 1);
    } else if (hex[i] >= 65 && hex[i] <= 70) {
      result += (hex[i] - 55) * pow(16, hex.length() - i - 1);
    } else if (hex[i] >= 97 && hex[i] <= 102) {
      result += (hex[i] - 87) * pow(16, hex.length() - i - 1);
    }
  }
  return result;
}

void SizeofPointer() {
  int a;
  int *wsk = &a;
  cout << "Address(zmienna,wskaznik): " << &a << "\t" << &wsk << endl;
  cout << "Sizeof(zmienna,wskaznik):  " << sizeof(a) << "\t" << sizeof(wsk)
      << endl;
}

//----------------------------------

int main() {
  int a;
  int b;
  int c;
  float x;
  double y;
  double z;
  int *wsk_int;
  // Rozne sposoby zapisu nowej wartosci do zmiennej b za pomoca wskaznika na b
  // i sasiadujace zmienne
  cout << "Size of intiger: " << sizeof(int) << endl;
  cout << "Size of float:   " << sizeof(float) << endl;
  cout << "Size of double:  " << sizeof(double) << endl;

  // Wyswieltlenie adresow zmiennych
  printf("\n--- C --------------------------------");
  printf(" \nAdres zmiennej A: %u", &a); // %u oznacza unsigned integer (4 bajty).
  printf(" \nAdres zmiennej A: %d", &a); // %d oznacza signed integer(4 bajty)
  printf(" \nAdres zmiennej A: %p\n", &a); // %p oznacza wskaznik (4/8 bajtów w zależności od systemu) x32 - 4 bajty, x64 - 8 bajtów
  cout << &a << endl;

  /* Poprawny sposob wypisywania adresow jako wskaznik dlatego ze
   * Jesli wypisujemy adres jako unsigned integer lub integer w systemie 32-bitowym to wynik bedzie poprawny, bo adres mieści się w 4 bajtach.
   * Ale w systemie 64-bitowym otrzymamy niepoprawny wynik, bo bedzie wypisane tylko 32 bity.
   *
   * %p dostosuje rozmiar do systemu i zawsze wypisze pełny adres w formacie hex
   *
   * Przykłady:
   *
   * x32:
   * --- C --------------------------------
   * Adres zmiennej A: 318764748
   * Adres zmiennej A: 318764748
   * Adres zmiennej A: 0000000412fff6cc
   * 0x412fff6cc
   *
   * x64:
   * --- C --------------------------------
   * Adres zmiennej A: 3407869820
   * Adres zmiennej A: -887097476
   * Adres zmiennej A: 0000007ecb1ff77c
   * 0x7ecb1ff77c
   *
   *
   *
   */

  // string a1 = std::to_string(0xa1a56);

  //-----------------------------------

  /*
   * Adres zapisujemy do strumenia jako string
   * Konwertujemy stringa na decimal za pomocą funkcji hextodec()
   * hextodec() nie działa poprawnie z 64-bitnymi adresami
   *
   */
  cout << "--- C++ ------------------------------" << endl;
  ostringstream sa;
  sa << &a;
  string a1 = sa.str();
  cout << "Adres zmiennej A_Stream: " << &a << "\t dec: " << hextodec(a1) << endl;

  //--- lub prosciej ------------------
   unsigned long p = (uintptr_t) &a;
  //long p = (long) &a;

  /*
   * Zamiast long/unsigned long poprawne użyć intptr_t lub uintptr_t,
   * ponieważ rzutowanie będzie działało bez utraty precyzji na wszystkich systemach.
   *
   * Przy używaniu typu long lub unsigned long w systemie Windows x64 dostanemy bład:
   * "cast from 'int*' to 'long int' loses precision [-fpermissive]"
   * Bo te typy mają tylko 32 bity i dlatego pełny adres nie zmieści się w nich.
   *
   *
   *
   */
  cout << "Adres zmiennej A_Prosty1: " << &a << "\t dec: " << p << endl;

  // Wypisujemy adres w formacie domyślnym (w danym przykładzie to będzie hex), a nie dec
  cout <<"Adres zmiennej A_Prosty2: "<< &a << "\t dec: " << dec << &a << endl;
  cout << dec << &a << endl;



  //-----------------------------------
  ostringstream sb;
  sb << &b;
  string b1 = sb.str();
  cout << "Adres zmiennej B: " << &b << "\t dec: " << hextodec(b1) << endl;

  //-----------------------------------
  ostringstream sc;
  sc << &c;
  string c1 = sc.str();
  cout << "Adres zmiennej C: " << &c << "\t dec: " << hextodec(c1) << endl;

  //-----------------------------------
  ostringstream sx;
  sx << &x;
  string x1 = sx.str();
  cout << "Adres zmiennej X: " << &x << "\t dec: " << hextodec(x1) << endl;

  //-----------------------------------
  ostringstream sy;
  sy << &y;
  string y1 = sy.str();
  cout << "Adres zmiennej Y: " << &y << "\t dec: " << hextodec(y1) << endl;

  //-----------------------------------
  ostringstream sz;
  sz << &z;
  string z1 = sz.str();
  cout << "Adres zmiennej Z: " << &z << "\t dec: " << hextodec(z1) << endl;

  //-----------------------------------
  cout << "Adres zmiennej WSK_INT: " << &wsk_int << endl; //Wypisujemy adres wskaznika w pamięci, a nie adres zmiennej na ktorą wskazuje wsk_int.

  //--------------------------------------------------
  a = b = c = 0;
  cout << "1. A, B, C: " << a << "\t" << b << "\t" << c << endl;

  b = 10;
  cout << "2. A, B, C: " << a << "\t" << b << "\t" << c << endl;

  wsk_int = &b;
  *wsk_int = 20;
  cout << "3. A, B, C: " << a << "\t" << b << "\t" << c << endl;

  wsk_int = &a;
  *(wsk_int + 1) = 30;
  cout << "4. A, B, C: " << a << "\t" << b << "\t" << c << endl;

  *(&a + 1) = 40;
  cout << "5. A, B, C: " << a << "\t" << b << "\t" << c << endl;

  //  wsk_int = &c;
  //*(wsk_int - 1) = 50;
  *(&c - 1) = 50;
  cout << "6. A, B, C: " << a << "\t" << b << "\t" << c << endl;

  *((int *) &x - 2) = 60;
  cout << "7. A, B, C: " << a << "\t" << b << "\t" << c << endl;

  *(int *) (&x - 1) = 70;
  cout << "8. A, B, C: " << a << "\t" << b << "\t" << c << endl;

  *((int *) &wsk_int - 2) = 80;
  cout << "9. A, B, C: " << a << "\t" << b << "\t" << c << endl;

  *(int *) (&wsk_int - 1) = 90;
  cout << "10. A, B, C: " << a << "\t" << b << "\t" << c << endl;

  SizeofPointer();

  // Zadanie 3.1

  return 0;
}
