#include <iostream>

/*
* Stwórz plik z działająca strukturą:
- deklaracja,
- definicja obiektów (w dowolny sposób):
  - wywołanie,
  - zmiana wartości,
  - odczyt wartości,
  // - czy można stworzyć konstruktor (inicjalizacja wartości poczatkowych - standard, lista inicjalizacyjna)
- nazwij program: ZadStruct.cc

 */

int main() {
  struct Student {
    int id;
    std::string imie;
    std::string kierunek;

    Student(int id, std::string imie, std::string kierunek) : id(id), imie(imie), kierunek(kierunek) {}
  };

  // Student student;
  // student.id = 1;
  // student.imie = "Adam";
  // student.kierunek = "Informatyka";
  //
  // std::cout << student.id << std::endl;
  // std::cout << student.imie << std::endl;
  // std::cout << student.kierunek << std::endl;

  Student student2(2, "Piotr", "Fizyka");
  std::cout << "Id: " << student2.id << std::endl;
  std::cout << "Imie: " << student2.imie << std::endl;
  std::cout << "Kierunek: " << student2.kierunek << std::endl;
  return 0;

}