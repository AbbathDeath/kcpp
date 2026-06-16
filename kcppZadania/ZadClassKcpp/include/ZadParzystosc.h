
#ifndef ZADCLASSKCPP_ZADPARZYSTOSC_H
#define ZADCLASSKCPP_ZADPARZYSTOSC_H

#include "ZadKcpp.h"
#include <string>
class ZadParzystosc : public ZadKcpp {
public:
  void Uruchom() override;
  std::string Opis() override;

  void czyParzystaBitowe(int liczba);

  void czyParzystaModulo(int liczba);

  void czyParzystaWarunkowe(int liczba);

  void CzyParzystaBitowo(int liczba);
  void CzyParzystaModulo(int liczba);
  void CzyParzystaWarunkowo(int liczba);
};
#endif //ZADCLASSKCPP_ZADPARZYSTOSC_H
