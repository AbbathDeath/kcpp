
#ifndef ZADCLASSKCPP_FIGURA_H
#define ZADCLASSKCPP_FIGURA_H

class Figura {
public:
  virtual void Narysuj() = 0;
  virtual double Pole() = 0;
  virtual double Obwod() = 0;
  virtual ~Figura();
};

class Trojkat {
private:
  double a;
  double b;
  double c;

  public:
  Trojkat(double a, double b, double c);

  double Pole();
  double Obwod();
};


class Kwadrat {
private:
  double bok;

public:
  Kwadrat(double bok);

  double Pole();
  double Obwod();
};

class Prostokat {
private:
  double szerokosc;
  double dlugosc;

public:
  Prostokat(double szerokosc, double dlugosc);
  double Pole();
  double Obwod();

};

class Kolo {
private:
  double promien;
public:
  Kolo(double promien);
  double Pole();
  double Obwod();
};

#endif //ZADCLASSKCPP_FIGURA_H
