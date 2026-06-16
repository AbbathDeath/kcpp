#ifndef ZADCLASSKCPP_ZADPRZEKAZYWANIEARGUMENTOW_CC_H
#define ZADCLASSKCPP_ZADPRZEKAZYWANIEARGUMENTOW_CC_H
#include "ZadKcpp.h"
#include "string"
#include <vector>

class ZadPrzekazywanieArgumentow : public ZadKcpp {
public:
  void Uruchom() override;
  std::string Opis() override;

  int zwracaniePrzezWartosc(int x);
  int zwracaniePrzezReferencje(int &x);
  int zwracaniePrzezWskaznik(int *x);
  void zwracanieTablicy(std:: vector<int> liczby);
};

#endif //ZADCLASSKCPP_ZADPRZEKAZYWANIEARGUMENTOW_CC_H
