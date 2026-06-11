#include <iostream>

/*
* Zadanie 3.12 (LOperatoryPrzypisania.cc)
-------------------------------------
Napisać program z przykładami:
(1) operatorow arytmetycznych i (2) operatorow przypisania
(1) i (2) jako osobne funkcje: (1) OperatoryArytmetyczne (2) OperatoryPrzypisania
- nazwać program: ZadOperatoryPrzypisania.cc

 */

void OperatoryArytmetyczne() {
  int a = 27;
  int b = 5;
  float wynik;
  wynik = a + b;

  std::cout << "Operatory Arytmetyczne" << std::endl;

  std::cout << "Dodawanie: " << a  << " + " << b << " = " << wynik <<  std::endl;

  wynik = a - b;
  std::cout << "Odejmowanie: " << a  << " - " << b << " = " << wynik <<  std::endl;

  wynik = a * b;
  std::cout << "Mnozenie: " << a  << " * " << b << " = " << wynik <<  std::endl;

  wynik = static_cast<float>(a) / static_cast<float>(b);
  std::cout << "Dzielenie: " << a  << " / " << b << " = " << wynik <<  std::endl;

  wynik = a % b;
  std::cout << "Reszta: " << a  << " % " << b << " = " << wynik <<  std::endl;

}

void OperatoryPrzypisania() {
  int a = 27;

  std::cout << "Operatory Przypisania" << std::endl;
  std::cout << "Operator = " << a << std::endl;

  a += 5;
  std::cout << "Operator += " << a << std::endl;

  a = 27;
  a -= 5;
  std::cout << "Operator -= " << a << std::endl;

  a = 27;
  a *= 5;
  std::cout << "Operator *= " << a << std::endl;

  a = 27;
  a /= 5;
  std::cout << "Operator /= " << a << std::endl;

  a = 27;
  a %= 5;
  std::cout << "Operator %= " << a << std::endl;
}

int main() {
  OperatoryArytmetyczne();
  std::cout << " " << std::endl;
  OperatoryPrzypisania();
  return 0;
}