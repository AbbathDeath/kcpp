#include "ZadBazaStudentow.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string ZadBazaStudentow::Opis() {
  return "Prosta bazy studentów z wykorzystaniem std:vector z fuknjonalnością dodawania, usunięcia, sortowania..\n";
}

void ZadBazaStudentow::Uruchom() {
  std::vector <std::string> studenci;
  int wybor;

  do {
    std::cout << "Wybierz opcje \n" << std::endl;
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
        break;

      default:
        std::cout << "Następnym razem wybierz poprawne opcje " << std::endl;
        break;
    }
  } while (wybor != 6);
}

void ZadBazaStudentow::wyswietlListe(const std::vector<std::string>& lista) {
  if (lista.size() == 0) {
    std::cout << "Lista studentów jest pusta" << std::endl;
  }
  for (int i = 0; i < lista.size(); i++) {
    std::cout << lista[i] << std::endl;
  }
}

void ZadBazaStudentow::dodajStudent(std::vector<std::string>& lista) {
  std::string student;
  std::cout << "Podaj Imie studenta" << std::endl;
  std::cin >> student;
  std::cout << "Dodalem studenta" << std::endl;
  lista.push_back(student);
}

void ZadBazaStudentow::czyStudentIstnieje(const std::vector<std::string>& lista) {
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

void ZadBazaStudentow::usunStudenta(std::vector<std::string>& lista) {
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

void ZadBazaStudentow::sortujListe(std::vector<std::string>& lista) {
  std::sort(lista.begin(), lista.end());
  for (int i = 0; i < lista.size(); i++) {
    std::cout << lista[i] << std::endl;
  }
}
