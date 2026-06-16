#ifndef ZADCLASSKCPP_ZADARYTMETYKAWSK_C_H
#define ZADCLASSKCPP_ZADARYTMETYKAWSK_C_H
#include "ZadKcpp.h"
#include "string"

class ZadArytmetykaWsk : public ZadKcpp {
public:
  void Uruchom() override;
  std::string Opis() override;

  void funkcja2(int* tablica);
};
#endif //ZADCLASSKCPP_ZADARYTMETYKAWSK_C_H
