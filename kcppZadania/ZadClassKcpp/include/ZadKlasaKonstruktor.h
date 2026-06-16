
#ifndef ZADCLASSKCPP_ZADKLASAKONSTRUKTOR_H
#define ZADCLASSKCPP_ZADKLASAKONSTRUKTOR_H

#include "string"
#include "ZadKcpp.h"
class ZadKlasaKonstruktor: public ZadKcpp {
public:
  void Uruchom() override;
  std::string Opis() override;
};
#endif //ZADCLASSKCPP_ZADKLASAKONSTRUKTOR_H
