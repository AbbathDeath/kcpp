

#ifndef ZADCLASSKCPP_ZADARYTMETYKAWSKZAMIANA_H
#define ZADCLASSKCPP_ZADARYTMETYKAWSKZAMIANA_H
#include <ZadKcpp.h>
#include <string>

class ZadArytmetykaWskZamiana : public ZadKcpp {
public:
  void Uruchom() override;
  std::string Opis() override;

  void ZmienMiejscamiWartosci(int* a, int* b);
};
#endif //ZADCLASSKCPP_ZADARYTMETYKAWSKZAMIANA_H
