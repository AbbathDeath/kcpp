#include "iostream"

/*
 *Zadanie 5.1
* --------------------------------------
Napisz prosty program z klasą
- metody deklarowane i definiowane w klasie
- metody deklarowane w klasie, a definiowane poza klasą
- zastosowanie 3 sekcji: public, private, protected
- zmienne w każdej z sekcji
- funkcje, które mają dostęp do zmiennych z sekcji protected i private
- funkcje inline
- nazwij program: ZadClass.cc
 */


class Student {
 public:
 std::string imie;

 void wyswietlDaneStudenta();

 void ustawId(int id) {
  this->id = id;
 }

 void ustawKierunek(std::string kierunek) {
  this->kierunek = kierunek;
 }

 private:
 int id = 0;

 protected:
 std::string kierunek;

};


void Student::wyswietlDaneStudenta() {
 std::cout << "Id: " << id << std::endl;
 std::cout << "Imie: " << imie << std::endl;
 std::cout << "Kierunek: " << kierunek << std::endl;


}

int main() {
 Student student;
 student.ustawId(1);
 student.imie = "Adam";
 student.ustawKierunek("Informatyka");

 student.wyswietlDaneStudenta();
 return 0;
}