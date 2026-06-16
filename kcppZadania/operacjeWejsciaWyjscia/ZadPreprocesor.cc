#include <iostream>
#define COS_TAM
#define test 1

#define to_string(s) #s

#define concatenate(a, b) a ## b

/*
*
Zadanie 4.11
--------------------------------------
Napisz program pokazujący zastosowanie dyrektywy preprocesora:
  '#ifdef' (#else)
  '#ifndef'
oraz
  '#define':
  (a) użycie makra
  (b) uzycie '#' i '##'
  (a) i (b) stwórz także dla porównania bez dyrektywy preprocesora
- nazwać program: ZadPreprocesor.cc
 */
int main() {
#ifdef COS_TAM
  std::cout << "ifdef dziala"<< std::endl;
#else

  std::cout << "brak ifdef"<< std::endl;
  #endif

  std::cout << test << std::endl;
  //const int test = 1; // bez dyrektywy preprocesora
  //std::cout << test << std::endl;

  std::cout << to_string("Test") << std::endl;
  std::cout << "Test" << std::endl; // bez dyrektywy preprocesora

  int ab = 10;
  std::cout << concatenate(a, b) << std::endl;
  std::cout << ab << std::endl; // bez dyrektywy preprocesora



  return 0;
}