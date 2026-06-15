#include <iostream>
#include <iomanip>


/*
 * Zadanie 4.6
--------------------------------------
Napisz program, który wyświetli stałe matematyczne w trzech różnych formatach:

Stała          Wartość (domyślnie)    Notacja stała      Notacja naukowa
--------       -----------------      -------------      --------------
Pi             3.14159                3.141593           3.141593e+00
e              2.71828                2.718282           2.718282e+00
Złoty podział  1.61803                1.618034           1.618034e+00

- Użyj scientific i fixed do zmiany notacji
- Dla każdej notacji zastosuj precyzję 6 cyfr
- Szerokość kolumn: nazwa stałej (15 znaków), wartości (20 znaków)
- Nagłówki kolumn wyrównaj do środka (używając spacji)
- nazwij program: ZadDaneNaukoweFormat.cc

 *
 */


int main() {
 double pi = 3.14159;
 double e = 2.71828;
 double zlotyPodzial = 1.61803;

 std::cout << std::left << std::setw(15) << "Stala";
 std::cout << std::left << std::setw(20) << "Wartość (domyślnie)";
 std::cout << std::setfill(' ') << std::setw(10) << " ";
 std::cout << std::left << std::setw(20) << "Notacja stała";
 std::cout << std::setfill(' ') << std::setw(10) << " ";
 std::cout << std::left << std::setw(20) << "Notacja naukowa";
 std::cout << std::endl;

 std::cout << std::setfill('-') << std::setw(5) << "-";
 std::cout << std::setfill(' ') << std::setw(10) << " ";
 std::cout << std::setfill('-') << std::setw(19) << "-";
 std::cout << std::setfill(' ') << std::setw(10) << " ";
 std::cout << std::setfill('-') << std::setw(13) << "-";
 std::cout << std::setfill(' ') << std::setw(16) << " ";
 std::cout << std::setfill('-') << std::setw(15) << "-";

 std::cout << std::setfill(' ') << std::endl;

 std::cout << std::left << std::setw(15) << "Pi";
 std::cout << std::left << pi;
 std::cout << std::setfill(' ') << std::setw(22) << " ";
 std::cout << std::left << std::fixed << std::setprecision(6) << pi;
 std::cout << std::setfill(' ') << std::setw(21) << " ";
 std::cout << std::left << std::scientific << pi;
 std::cout << std::endl;

 std::cout << std::left << std::setw(15) << "e";
 std::cout << std::fixed << std::setprecision(5) << std::left << e;
 std::cout << std::setfill(' ') << std::setw(22) << " ";
 std::cout << std::left << std::fixed << std::setprecision(6) << e;
 std::cout << std::setfill(' ') << std::setw(21) << " ";
 std::cout << std::left << std::scientific << e;
 std::cout << std::endl;

 std::cout << std::left << std::setw(15) << "Złoty podział";
 std::cout << std::setfill(' ') << std::setw(2) << " ";
 std::cout << std::fixed << std::setprecision(5) << std::left << zlotyPodzial;
 std::cout << std::setfill(' ') << std::setw(22) << " ";
 std::cout << std::left << std::fixed << std::setprecision(6) << zlotyPodzial;
 std::cout << std::setfill(' ') << std::setw(21) << " ";
 std::cout << std::left << std::scientific << zlotyPodzial;
 std::cout << std::endl;

 return 0;

}