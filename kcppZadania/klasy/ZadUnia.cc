#include <iostream>

/*
* Zadanie 5.3
--------------------------------------
Pokaż działanie uni (niebezpieczenstwa, bledy)
- nazwij program: ZadUnia.cc
 */

int main() {

  union Test {
    int liczba;
    float liczba2;
  };

  Test test;
  test.liczba = 2;
  std::cout << "liczba: " << test.liczba << std::endl;
  test.liczba2 = 3.14;
  std::cout << "liczba: " << test.liczba << std::endl;


  return 0
}