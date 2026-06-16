#include <iostream>

/*

Zadanie 5.4
--------------------------------------
Stwórz klase (program: ZadKlasaKonstruktor.cc) oraz structure (program: ZadStructKonstruktor.cc) z przykładami konstruktorów i
inicializacją zmiennych:
- domyślny konstruktor,
- domyślny destruktor,
- konstruktor z niepustą liczbą zmiennych argumentów
- inicjalizacja zmiennych:
  - 'standardowa',
  - inicjalizacyjna za pomocą listy inicjalizacyjnej

 */

int main() {
  struct Student {
    int id;
    std::string imie;
    std::string kierunek;

    Student() {}

    ~Student() {}

    Student(std::string imie);

    Student(std::string imie, std::string kierunek, int id) {
      this->imie = imie;
      this->kierunek = kierunek;
      this->id = id;
    }

    Student(int id, std::string imie, std::string kierunek) : id(id), imie(imie), kierunek(kierunek) {}
  };

  Student student;
  student.id = 1;
  student.imie = "Adam";
  student.kierunek = "Informatyka";

  std::cout << "Id: " << student.id << std::endl;
  std::cout << "Imie: " << student.imie << std::endl;
  std::cout << "Kierunek: " << student.kierunek << std::endl;

  Student student2("Marek", "Informatyka", 2);
  std::cout << "Id: " << student2.id << std::endl;
  std::cout << "Imie: " << student2.imie << std::endl;
  std::cout << "Kierunek: " << student2.kierunek << std::endl;


  Student student3(3, "Piotr", "Fizyka");
  std::cout << "Id: " << student3.id << std::endl;
  std::cout << "Imie: " << student3.imie << std::endl;
  std::cout << "Kierunek: " << student3.kierunek << std::endl;

  return 0;

}