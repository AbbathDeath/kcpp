#ifndef ZADMETODYABSTRAKCYJNE_H
#define ZADMETODYABSTRAKCYJNE_H

#include <string>
#include "ZadKcpp.h"

class ZadMetodyAbstrakcyjne : public ZadKcpp {
public:
  void Uruchom() override;
  std::string Opis() override;
};

#endif
