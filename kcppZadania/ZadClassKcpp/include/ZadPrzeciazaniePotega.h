
#ifndef ZADCLASSKCPP_ZADPRZECIAZANIEPOTEGA_H
#define ZADCLASSKCPP_ZADPRZECIAZANIEPOTEGA_H


#include "ZadKcpp.h"
#include <string>

class ZadPrzeciazaniePotega : public ZadKcpp {
public:
  void Uruchom() override;
  std::string Opis() override;

  int potega(int x, int y);

  double potega(double x, int y);
};
#endif //ZADCLASSKCPP_ZADPRZECIAZANIEPOTEGA_H
