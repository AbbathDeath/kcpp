#ifndef ZADCLASSKCPP_ZADARYTMETYKAWSKPRZESUNIECIE_H
#define ZADCLASSKCPP_ZADARYTMETYKAWSKPRZESUNIECIE_H

#include <ZadKcpp.h>
#include <string>

class ZadArytmetykaWskPrzesuniecie : public ZadKcpp {
public:
  void Uruchom() override;
  std::string Opis() override;

  void presunElement(int* tablica, int rozmiar);

};

#endif //ZADCLASSKCPP_ZADARYTMETYKAWSKPRZESUNIECIE_H
