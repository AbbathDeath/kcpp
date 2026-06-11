#include <iostream>

/*
 * Zadanie 3.11 (LArytmetykaWskaznikow.cc)
-------------------------------------
Co robią poniższe operacje? Napisać program który pokazuje ich działanie.
1. Funkcja1()
p++;
++p;
++*p;
++(*p);
++*(p);
*p++;
(*p)++;
*(p)++;
*++p;
*(++p);

oraz (Funkcja2()) w analogii do LArytmetykaWzkaznikowZmienne.cc aby wypisywał na ekran:

1.  A, B, C: 0  0   0
2.  A, B, C: 0  10  0
3.  A, B, C: 0  10  20
4.  A, B, C: 0  30  20
5.  A, B, C: 40 30  20
6.  A, B, C: 40 50  20
7.  A, B, C: 40 50  60
8.  A, B, C: 40 70  60
9.  A, B, C: 80 70  60
10. A, B, C: 80 90  60

przy początkowych wartościach zmiennych: int a = 0, b = 0, c = 0;
- nazwać program: ZadArytmetykaWskaznikow.cc
 *
 *
 *
 *
 */

void funkcja2(int* tablica) {
  int* ptr = tablica + 1;


  std::cout << "1. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  *ptr += 10;
  std::cout << "2. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  // B - C
  ptr++;
  *ptr += 20;
  std::cout << "3. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  //C - B
  ptr--;
  *ptr += 20;
  std::cout << "4. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  // B - A
  ptr--;
  *ptr += 40;
  std::cout << "5. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  // A - B
  ptr++;
  *ptr += 20;
  std::cout << "6. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  // B - C
  ptr++;
  *ptr += 40;
  std::cout << "7. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  // C - B
  ptr--;
  *ptr += 20;
  std::cout << "8. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  // B - A
  ptr--;
  *ptr += 40;
  std::cout << "9. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  // A - C
  ptr++;
  *ptr += 20;
  std::cout << "10. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;







}

int main() {

  int a = 5;

  int* ptr = &a;

  std::cout << "Adres pierwotny: " << ptr << std::endl;

  std::cout << "Operacja p++: " << ptr++ << std::endl;
  ptr = &a;

  std::cout << "Operacja ++p: " << ++ptr << std::endl;
  ptr = &a;

  std::cout << "Operacja ++*p: " << ++*ptr << std::endl;
  a = 5;
  ptr = &a;

  std::cout << "Operacja ++(*p): " << ++(*ptr) << std::endl;
  a = 5;
  ptr = &a;

  std::cout << "Operacja ++*(p): " << ++*(ptr) << std::endl;
  a = 5;
  ptr = &a;

  std::cout << "Operacja *p++: " << *ptr++ << std::endl;
  a = 5;
  ptr = &a;

  std::cout << "Operacja (*p)++: " << (*ptr)++ << std::endl;
  a = 5;
  ptr = &a;

  std::cout << "Operacja *(p)++: " << *(ptr)++ << std::endl;
  a = 5;
  ptr = &a;

  int tablica[2] = {1, 2};
  ptr = tablica;
  std::cout << "Operacja *++p: " << *++ptr << std::endl;
  ptr = tablica;

  std::cout << "Operacja *(++p): " << *(++ptr) << std::endl;

  std::cout << "" << std::endl;

  int tablica2[3] = {0, 0, 0};

  funkcja2(tablica2);
  return 0;
}





/*
* p++;
++p;
++*p;
++(*p);
++*(p);
*p++;
(*p)++;
*(p)++;
*++p;
*(++p);

 */