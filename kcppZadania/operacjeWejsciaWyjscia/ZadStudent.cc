#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

/*
*
Zadanie 4.16
------------------------------------
Napisz program ZadStudent.cc, do zrobienia prostej bazy studentów z wykorzystaniem std:vector, z fuknjonalnością:
- Dodaj studenta
- Usun studenta
- Wyswietl liste
- Sortuj liste (alfabetycznie)
- Sprawdz, czy student istnieje
Spróbj napisać program sam. Jeśli się uda ti super, jeśli nie to przykład jest w ZadStudent/LVectorStudent.cc.
Jeśli nie napisałeś sam programu (jeśli napisałeś) zmodyfikuj program, aby przechowywał nie tylko imiona, ale także nazwiska i numery indeksów (użyj struct Student).
Dodaj walidację danych (np. sprawdzanie, czy imię nie jest puste lub czy numer indeksu jest unikalny).

 */

void wyswietlListe(const std::vector<std::string>& lista) {
 if (lista.size() == 0) {
  std::cout << "Lista studentów jest pusta" << std::endl;
 }
 for (int i = 0; i < lista.size(); i++) {
  std::cout << lista[i] << std::endl;
 }
}

void dodajStudent(std::vector<std::string>& lista) {
 std::string student;
 std::cout << "Podaj Imie studenta" << std::endl;
 std::cin >> student;
 std::cout << "Dodalem studenta" << std::endl;
 lista.push_back(student);
}

void czyStudentIstnieje(const std::vector<std::string>& lista) {
 bool czyIstnieje = false;
 std::string student;
 std::cout << "Podaj Imie studenta" << std::endl;
 std::cin >> student;
 for (int i = 0; i < lista.size(); i++) {
  if (lista[i] == student) {
   czyIstnieje = true;
   break;
  }
 }
 if (czyIstnieje) {
  std::cout << "Student istneje" << std::endl;
 }
 else {
  std::cout << "Student nie istneje" << std::endl;
 }
}

void usunStudenta(std::vector<std::string>& lista) {
 bool czyIstnieje = false;
 std::string student;
 std::cout << "Podaj Imie studenta" << std::endl;
 std::cin >> student;

 for (int i = 0; i < lista.size(); i++) {
  if (lista[i] == student) {
   czyIstnieje = true;
   break;
  }
 }
 if (czyIstnieje) {
  lista.erase(find(lista.begin(), lista.end(), student));
  std::cout << "Usunełem studenta" << std::endl;
 }
 else {
  std::cout << "Student nie istneje" << std::endl;
 }
}

void sortujListe(std::vector<std::string>& lista) {
 std::sort(lista.begin(), lista.end());
 for (int i = 0; i < lista.size(); i++) {
  std::cout << lista[i] << std::endl;
 }
}



int main() {
 std::vector <std::string> studenci;
 int wybor;

 do {

  // dodajStudent(studenci);
  // dodajStudent(studenci);
  // dodajStudent(studenci);
  // wyswietlListe(studenci);
  // czyStudentIstnieje(studenci);
  // usunStudenta(studenci);
  // wyswietlListe(studenci);

  std::cout << "Wybierz opcje " << std::endl;
  std::cout << "1. Dodaj studenta" << std::endl;
  std::cout << "2. Usuń studenta" << std::endl;
  std::cout << "3. Wyświetl listę" << std::endl;
  std::cout << "4. Sortuj listę" << std::endl;
  std::cout << "5. Sprawdż studenta" << std::endl;
  std::cout << "6. Wyjście" << std::endl;
  std::cin >> wybor;

  switch (wybor) {
   case 1:
    dodajStudent(studenci);;
    break;

   case 2:
    usunStudenta(studenci);
    break;

   case 3:
    wyswietlListe(studenci);
    break;

   case 4:
    sortujListe(studenci);
    break;

   case 5:
    czyStudentIstnieje(studenci);
    break;

   case 6:
    return 0;

   default:
    std::cout << "Następnym razem wybierz poprawne opcje " << std::endl;
    return 0;
  }
  } while (wybor != 6);
}