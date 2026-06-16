
#ifndef ZADCLASSKCPP_ZADARYTMETYKAWSKSUMA_H
#define ZADCLASSKCPP_ZADARYTMETYKAWSKSUMA_H

#include <ZadKcpp.h>
#include <string>

class ZadArytmetykaWskSuma : public ZadKcpp {
public:
  void Uruchom() override;
  std::string Opis() override;

  int suma(int* tablica, int rozmiar);

};
#endif //ZADCLASSKCPP_ZADARYTMETYKAWSKSUMA_H
