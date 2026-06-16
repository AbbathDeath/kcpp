#include "ZadMetodyAbstrakcyjne.h"
#include "Figura.h"
#include <string>
#include <iostream>


std::string ZadMetodyAbstrakcyjne::Opis() {
  return "Metody abstrakcyjne - pole i obwod figur\n";
}

void ZadMetodyAbstrakcyjne::Uruchom() {
  Figura *objKwadrat = new Kwadrat(4);
  std::cout << "Kwadrat: "<< std::endl;
  std::cout << "Pole: " << objKwadrat->Pole() << std::endl;
  std::cout << "Obwod:" << objKwadrat->Obwod() << std::endl;

  std::cout << std::endl;

  Figura *objProstokat = new Prostokat(4, 6);
  std::cout << "Prostokat: "<< std::endl;
  std::cout << "Pole: " << objProstokat->Pole() << std::endl;
  std::cout << "Obwod: "<< objProstokat->Obwod() << std::endl;

  std::cout << std::endl;

  Figura *objTrojkat = new Trojkat(2, 3, 4);
  std::cout << "Trojkat: "<< std::endl;
  std::cout << "Pole: " << objTrojkat->Pole() << std::endl;
  std::cout << "Obwod: " << objTrojkat->Obwod() << std::endl;

  std::cout << std::endl;

  Figura *objKolo = new Kolo(2);
  std::cout << "Kolo: "<< std::endl;
  std::cout << "Pole: " << objKolo->Pole() << std::endl;
  std::cout << "Obwod: " << objKolo->Obwod() << std::endl;

  Kolo kolo2(2);
  double x = 22;
  std::cout << "Dystans dla " << x << "m2: " << kolo2.Dystans(x) << std::endl;
  std::cout << std::endl;

}


