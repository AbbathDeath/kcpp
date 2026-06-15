#include <iostream>
#include <iomanip>

/*
* Zadanie 4.4
--------------------------------------
Napisz program, który wyświetli tabelę produktów w następującym formacie:

| Nazwa          | Cena    | Ilosc |
|----------------|---------|-------|
| Chleb          |   4.99  |    5  |
| Mleko          |   3.20  |   10  |
| Jajka (10 szt) |   8.50  |    3  |

- Użyj manipulatorów setw, left i right do wyrównania kolumn
- Ceny wyświetl z dokładnością do 2 miejsc po przecinku
- Szerokość kolumn: Nazwa (15 znaków), Cena (8 znaków), Ilosc (7 znaków)
- nazwij program: ZadTabelaFormat.cc
 *
 */

int main() {

 std::cout << "|";
 std::cout << std::fixed << std::setprecision(2);
 std::cout << std::left << std::setw(15) << " Nazwa";
 std::cout << "|";
 std::cout << std::left << std::setw(8) << " Cena";
 std::cout << "|";
 std::cout << std::left << std::setw(7) << " Ilosc";
 std::cout << "|";
 std::cout << std::endl;

 std::cout << "|";
 std::cout << std::setfill('-') << std::setw(15) << "-";
 std::cout << "|";
 std::cout << std::setfill('-') << std::setw(8) << "-";
 std::cout << "|";
 std::cout << std::setfill('-') << std::setw(7) << "-";
 std::cout << "|" << std::endl;

 std::cout << std::setfill(' ');
 std::cout << "|";
 std::cout << std::left << std::setw(15) << " Chleb";
 std::cout << "|";
 std::cout << std::right << std::setw(8)  << std::setprecision(2)<< "4.99 ";
 std::cout << "|";
 std::cout << std::right << std::setw(7) << "5 ";
 std::cout << "|";
 std::cout << std::endl;

 std::cout << "|";
 std::cout << std::left << std::setw(15) << " Mleko";
 std::cout << "|";
 std::cout << std::right << std::setw(8) << "3.20 ";
 std::cout << "|";
 std::cout << std::right << std::setw(7) << "10 ";
 std::cout << "|";
 std::cout << std::endl;

 std::cout << "|";
 std::cout << std::left << std::setw(15) << " Jajka(10 szt)";
 std::cout << "|";
 std::cout << std::right << std::setw(8) << "8.50 ";
 std::cout << "|";
 std::cout << std::right << std::setw(7) << "3 ";
 std::cout << "|";
 std::cout << std::endl;



}