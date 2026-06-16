#include "ZadKlasaKonstruktor.h"
#include "Student.h"

#include <iostream>
#include <string>

std::string ZadKlasaKonstruktor::Opis() {
  return "Klasa z przykładami konstruktorów i inicializacją zmiennych:\n";
}

void ZadKlasaKonstruktor::Uruchom() {
  Student student1;
  student1.ustawId(1);
  student1.imie = "Adam";
  student1.ustawKierunek("Biologia");

  Student student2("Marek", "Informatyka", 2);

  Student student3(3, "Piotr", "Fizyka");

  student1.wyswietlDaneStudenta();
  std::cout << std::endl;

  student2.wyswietlDaneStudenta();
  std::cout << std::endl;

  student3.wyswietlDaneStudenta();
  std::cout << std::endl;
}

