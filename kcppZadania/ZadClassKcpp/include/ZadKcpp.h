#ifndef ZADKCPP_H
#define ZADKCPP_H

#include <string>
class ZadKcpp {
public:
  virtual void Uruchom() = 0;
  virtual std::string Opis() = 0;
  virtual ~ZadKcpp();
};

#endif



