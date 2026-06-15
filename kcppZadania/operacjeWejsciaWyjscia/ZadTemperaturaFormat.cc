#include <iostream>
#include <iomanip>

/*
*
Zadanie 4.5
--------------------------------------
Napisz program, który wyświetli tabelę konwersji temperatur z Celsjusza na Fahrenheita dla wartości od -10 do 10 stopni C (co 5 stopni) w formacie:

Celsjusz   Fahrenheit
-------    ---------
  -10        14.00
   -5        23.00
    0        32.00
    5        41.00
   10        50.00

- Użyj fixed i setprecision dla temperatur w Fahrenheitach
- Liczby wyświetl z wiodącymi spacjami (dodatnie) lub minusem (ujemne)
- Wyrównaj liczby do prawej w kolumnach
- nazwij program: ZadTemperaturaFormat.cc
 *
 */


int main() {

 int celsjusz = -10;
 double fahrenheit;


 std::cout << std::setw(8) << "Сelsjusz";
 std::cout << std::setfill(' ') << std::setw(5) << " ";
 std::cout << std::setw(11) << "Fahrenheit";
 std::cout << std::endl;

 std::cout << std::setfill('-') << std::setw(8) << "-";
 std::cout << std::setfill(' ') << std::setw(6) << " ";
 std::cout << std::setfill('-') << std::setw(10) << "-";
 std::cout << std::setfill(' ') << std::endl;

 std::cout << std::right << std::fixed << std::setprecision(2);

 for (int i=0; i<5; i++) {
  fahrenheit = static_cast<double>(celsjusz) * 9 / 5 + 32;
  std::cout << std::right << std::setw(5) << celsjusz;
  std::cout << std::setfill(' ') << std::setw(10) << " ";
  std::cout << std::right << std::setw(6) << fahrenheit;
  std::cout << std::endl;
  celsjusz += 5;

 }

 return 0;

}