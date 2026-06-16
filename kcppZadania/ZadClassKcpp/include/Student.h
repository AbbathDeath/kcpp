
#ifndef ZADCLASSKCPP_STUDENT_H
#define ZADCLASSKCPP_STUDENT_H
#include <string>

class Student {
public:
  std::string imie;
  Student();
  ~Student();

  Student(std::string imie, std::string kierunek, int id);

  Student(int id, std::string imie, std::string kierunek);

  void wyswietlDaneStudenta();

  void ustawKierunek(std::string kierunek);
  void ustawId(int id);
  void wypiszStudent();

private:
  int id;

protected:
  std::string kierunek;
};
#endif //ZADCLASSKCPP_STUDENT_H
