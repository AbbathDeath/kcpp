#include <iostream>
#include <iomanip>

/*
* Napisz program:
- pokazujący wykonanie tych samych operacji w c i c++ (kcpp02::34)
- nazwać program: ZadCandCPP.cc


 *
 */

int main() {
  std::cout << "Przyklad 1 - liczba calkowita: " << std::endl;
  std::cout << "C: ";
  printf("%i\n", 19);
  std::cout << "C++: ";
  std::cout << 19 << std::endl;

  std::cout << " " << std::endl;

  std::cout << "Przyklad 2 - liczba szesnastkowa: " << std::endl;
  std::cout << "C: ";
  printf("%x\n", 19);
  std::cout << "C++: ";
  std::cout << std::hex << 19 << std::endl;

  std::cout << " " << std::endl;

  double x = 19.0;
  std::cout << "Przyklad 3 - liczba zmiennoprzecinkowa: " << std::endl;
  std::cout << "C: " << std::endl;
  printf("%f\n", 19.0);
  printf("%f\n", x);
  std::cout << "C++: " << std::endl;
  std::cout << 19.0 << std::endl;
  std::cout << x << std::endl;

  std::cout << " " << std::endl;

  std::cout << "Przyklad 4 - szerokosc pola: " << std::endl;
  std::cout << "C: ";
  printf("%9f\n", 3.0);
  std::cout << "C++: ";
  std::cout << std::setw(11) << 19.0 << std::endl;

  std::cout << " " << std::endl;

  std::cout << "Przyklad 5 - Precyzja liczby zmiennoprzecinkowej " << std::endl;
  std::cout << "C: ";
  printf("%11.3f\n", 3.1234);
  std::cout << "C++: ";
  std::cout << std::setw(11) << std::setprecision(3) << 7.0 << std::endl;

  std::cout << " " << std::endl;


  std::cout << "Przyklad 6 - formatowanie wyjscia: " << std::endl;
  std::cout << "C: ";
  printf("Napis%f%c\n", 9.0, 'z');
  std::cout << "C++: ";
  std::cout << "Napis" << 9.0 << 'z' << std::endl;

  return 0;
}