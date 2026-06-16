#include "Student.h"
#include <iostream>
void Student::ustawId(int id) {
  this->id = id;
}

void Student::ustawKierunek(std::string kierunek) {
  this->kierunek = kierunek;
}

Student::Student() {}
Student::~Student() {}

Student::Student(std::string imie, std::string kierunek, int id) {
  this->imie = imie;
  this->kierunek = kierunek;
  this->id = id;
}

Student::Student(int id, std::string imie, std::string kierunek) : id(id), imie(imie), kierunek(kierunek) {}

void Student::wyswietlDaneStudenta() {
  std::cout << "Id: " << id << std::endl;
  std::cout << "Imie: " << imie << std::endl;
  std::cout << "Kierunek: " << kierunek << std::endl;

}

