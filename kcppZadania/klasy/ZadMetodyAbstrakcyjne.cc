/*
* Bazując na pliku LClassMetodyAbstrakcyjne.cc stwórz program który oblicza:
- obwód, pole powierzchni
dla:
- kwadrat, trójkąt, prostokąt, koło (jako klasy dziedziczące po klasie abstrakcyjnej Figura),
oraz funkcja Dystans (dodatkowo w klasie Koło): Jeśli rząd podaje, że na każdego obywatela w sklepie (kościele etc) przypada X metrów kwadratowych (argument przekazywany do funkcji) to w jakiej odległości (promieniu - to ma funkcja Dystans zwracać) może znaleźć się następna osoba.
Nazwij program: ZadMetodyAbstrakcyjne.cc
 *
 *
 */

#include <iostream>
#include <cmath>

//------------------------------------------------------------------
class Figura {
public:
  virtual void Narysuj() = 0;
  virtual double Pole() = 0;
  virtual double Obwod() = 0;
};
//------------------------------------------------------------------

//------------------------------------------------------------------
class Trojkat : public Figura {
private:
  double a;
  double b;
  double c;

public:
  Trojkat(double a, double b, double c) {
    this->a = a;
    this->b = b;
    this->c = c;
  }
  double Pole() {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
  }

  double Obwod() {
    return a + b + c;

  }
  void Narysuj() { std::cout << "Przepis na narysowanie trojkata" << std::endl; }
};


//------------------------------------------------------------------
// class Kwadrat : public Figura
class Kwadrat : public Figura {
private:
  double bok;

public:
  Kwadrat(double bok) {
    this->bok = bok;
  }

  double Pole() {
    return bok * bok;

  }
  double Obwod() {
    return 4 * bok;
  }
  void Narysuj() { std::cout << "Przepis na narysowanie kwadrata" << std::endl; }
};

//------------------------------------------------------------------
class Prostokat : public Figura {
private:
  double szerokosc;
  double dlugosc;

public:
  Prostokat(double szerokosc, double dlugosc) {
    this->szerokosc = szerokosc;
    this->dlugosc = dlugosc;
  }
  double Pole() {
    return dlugosc * szerokosc;
  }

  double Obwod() {
    return 2 * (dlugosc + szerokosc);
  }
  void Narysuj() { std::cout << "Przepis na narysowanie prostokata" << std::endl; }
};

//------------------------------------------------------------------

class Kolo : public Figura {
private:
  double promien;

public:
  Kolo(double promien) {
    this->promien = promien;
  }

  double Pole() {
    return 3.14 * promien * promien;
  }

  double Obwod() {
    return 2 * 3.14 * promien;
  }

  double Dystans(double x) {
    double r = sqrt(x / 3.14);
    return r;
  }

  void Narysuj() { std::cout << "Przepis na narysowanie koła" << std::endl; }

};
//------------------------------------------------------------------
int main() {
  // Kwadrat *objKwadrat = new Kwadrat();
  Figura *objKwadrat = new Kwadrat(4);
  // objKwadrat->Narysuj();
  std::cout << "Kwadrat: "<< std::endl;
  std::cout << "Pole: " << objKwadrat->Pole() << std::endl;
  std::cout << "Obwod:" << objKwadrat->Obwod() << std::endl;

  std::cout << std::endl;

  Figura *objProstokat = new Prostokat(4, 6);
  // objProstokat->Narysuj();
  std::cout << "Prostokat: "<< std::endl;
  std::cout << "Pole: " << objProstokat->Pole() << std::endl;
  std::cout << "Obwod: "<< objProstokat->Obwod() << std::endl;

  std::cout << std::endl;

  Figura *objTrojkat = new Trojkat(2, 3, 4);
  std::cout << "Trojkat: "<< std::endl;
  std::cout << "Pole: " << objTrojkat->Pole() << std::endl;
  std::cout << "Obwod: " << objTrojkat->Obwod() << std::endl;
  // objTrojkat->Narysuj();

  std::cout << std::endl;

  Figura *objKolo = new Kolo(2);
  std::cout << "Kolo: "<< std::endl;
  std::cout << "Pole: " << objKolo->Pole() << std::endl;
  std::cout << "Obwod: " << objKolo->Obwod() << std::endl;

  Kolo kolo2(2);
  double x = 22;
  std::cout << "Dystans dla " << x << "m2: " << kolo2.Dystans(x) << std::endl;
  // objKolo->Narysuj();

  // Figura fig;    //ERROR
  // Figura *fig = new Figura();    //ERROR
  return 0;
}