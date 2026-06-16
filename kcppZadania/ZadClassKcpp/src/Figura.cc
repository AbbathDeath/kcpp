#include "Figura.h"
#include <cmath>
Figura:: ~Figura () {}

Trojkat:: Trojkat (double a, double b, double c) {
  this->a = a;
  this->b = b;
  this->c = c;
}

double Trojkat::Pole() {
  double p = (a + b + c) / 2;
  return sqrt(p * (p - a) * (p - b) * (p - c));
}

double Trojkat::Obwod() {
  return a + b + c;
}

Kwadrat::Kwadrat(double bok) {
  this->bok = bok;
}

double Kwadrat::Pole() {
  return bok * bok;

}
double Kwadrat::Obwod() {
  return 4 * bok;
}

Kolo::Kolo(double promien) {
  this->promien = promien;
}

double Kolo::Pole() {
  return 3.14 * promien * promien;
}

double Kolo::Obwod() {
  return 2 * 3.14 * promien;
}

double Kolo::Dystans(double x) {
  double r = sqrt(x / 3.14);
  return r;
}





