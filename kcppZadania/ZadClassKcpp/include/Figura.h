
#ifndef ZADCLASSKCPP_FIGURA_H
#define ZADCLASSKCPP_FIGURA_H

class Figura {
public:
  virtual double Pole() = 0;
  virtual double Obwod() = 0;
  virtual ~Figura();
};

class Trojkat: public Figura {
private:
  double a;
  double b;
  double c;

  public:
  Trojkat(double a, double b, double c);

  double Pole();
  double Obwod();
};


class Kwadrat: public Figura {
private:
  double bok;

public:
  Kwadrat(double bok);

  double Pole();
  double Obwod();
};

class Prostokat: public Figura {
private:
  double szerokosc;
  double dlugosc;

public:
  Prostokat(double szerokosc, double dlugosc);
  double Pole();
  double Obwod();

};

class Kolo: public Figura {
private:
  double promien;
public:
  Kolo(double promien);
  double Pole();
  double Obwod();
  double Dystans(double x);
};

#endif //ZADCLASSKCPP_FIGURA_H
