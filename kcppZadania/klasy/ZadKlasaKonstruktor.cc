#include <iostream>
#include <string>



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

  Student() {}

  ~Student() {}

  Student(std::string imie);

  Student(std::string imie, std::string kierunek, int id) {
    this->imie = imie;
    this->kierunek = kierunek;
    this->id = id;
  }

  Student(int id, std::string imie, std::string kierunek) : id(id), imie(imie), kierunek(kierunek) {}

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
  Student student1;
  student1.ustawId(1);
  student1.imie = "Adam";
  student1.ustawKierunek("Biologia");

  Student student2("Marek", "Informatyka", 2);

  Student student3(3, "Piotr", "Fizyka");

  student1.wyswietlDaneStudenta();

  student2.wyswietlDaneStudenta();

  student3.wyswietlDaneStudenta();

  return 0;
}
