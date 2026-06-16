#ifndef ZADCLASSKCPP_ZADBAZASTUDENTOW_H
#define ZADCLASSKCPP_ZADBAZASTUDENTOW_H

#include "ZadKcpp.h"
#include "string"
#include <vector>

class ZadBazaStudentow : public ZadKcpp {
public:
  void Uruchom() override;
  std::string Opis() override;

  void wyswietlListe(const std::vector<std::string>& lista);
  void dodajStudent(std::vector<std::string>& lista);
  void czyStudentIstnieje(const std::vector<std::string>& lista);
  void usunStudenta(std::vector<std::string>& lista);
  void sortujListe(std::vector<std::string>& lista);
};
#endif //ZADCLASSKCPP_ZADBAZASTUDENTOW_H
