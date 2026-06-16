#include <iostream>
#include <iomanip>
/*
* Zadanie 4.1
--------------------------------------
Napisz program z przykładami manipulacji strumieniem cout:
- setw, setprecision, setfill, fixed, scientific, hex, dec... etc (patrz plik kcpp02.pdf)
- nazwać program LManipulacjaStrumieniemCout.cc

  Spraw aby na ekran wypisało to co jest pomiedzy liniami ze znakami =:
  ==================================================
  Wynika naszego działania: x.xxxxx jest niepoprawny ale:
     output:   xx.xxx    T:  x.xxx
     output1:   x.xxxx   T: xx.xxxxx
     output2:   x.xxxx   T: xx.xxxxxx
     ---------------------------------
     average:  xx.xxxx   T: xx.xxxxxx
  ==================================================
  - x.xxxx są wynikami jakiś działań, a nie sztucznie wstawionymi liczbami
  - ustawienie liczb/wypisanie/sformatowanie wykonać używającg manipulatorow strumieniem (setw, setprecision, setfill etc), zamiast " " czy \t
 *
 */

int main() {
  double a = 7;
  double b = 5;
  double c = 3;

  double output = a / c;
  double output1 = b / c;
  double output2 = (a + b) / c;

  double t1 = output * a;
  double t2 = output1 * b;
  double t3 = output2 * c;

  double averageOutput = (output + output1 + output2) / 3;
  double averageT = (t1 + t2 + t3) / 3;

  std::cout << std::setfill('=') << std::setw(20) << "=" << std::endl;

  std::cout << std::setfill(' ') << std::setw(10) << std::left << "output:";
  std::cout << std::setw(10) << std::fixed <<std::setprecision(3) << std::right << output;
  std::cout << std::setw(5) << "T:";
  std::cout << std::setw(10) << std::setprecision(3) << t1 << std::endl;

  std::cout << std::setw(10) << std::left << "output1:";
  std::cout << std::setw(10) << std::fixed <<std::setprecision(4) << std::right << output;
  std::cout << std::setw(5) << "T:";
  std::cout << std::setw(10) << std::setprecision(5) << t2 << std::endl;

  std::cout << std::setw(10) << std::left << "output2:";
  std::cout << std::setw(10) << std::fixed <<std::setprecision(4) << std::right << output2;
  std::cout << std::setw(5) << "T:";
  std::cout << std::setw(10) << std::setprecision(6) << t3 << std::endl;

  std::cout << std::setfill('-') << std::setw(20) << "-" << std::endl;

  std::cout << std::setfill(' ') << std::setw(10) << std::left << "average:";
  std::cout << std::setw(10) << std::fixed <<std::setprecision(4) << std::right << averageOutput;
  std::cout << std::setw(5) << "T:";
  std::cout << std::setw(10) << std::setprecision(6) << averageT << std::endl;

  std::cout << std::setfill('=') << std::setw(20) << "=" << std::endl;
  return 0;
}