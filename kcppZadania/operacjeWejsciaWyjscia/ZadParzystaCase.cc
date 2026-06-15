#include <iostream>

/*
Zadanie 4.8
--------------------------------------
Napisz program z użyciem 'switch' wybierajacy do wykonania jedną z trzech funkcji z zadania ZadParzysta.cc:
- nazwać program: ZadParzystaCase.cc (kopia ZadParzyste do ZadParzysteCase+switch, lub pominięcie ZadParzyste i umieszczenie wszystkiego w ZadParzystaCase)


*/

void czyParzystaBitowe(int liczba) {
  int wynik = liczba & 1;
  if (wynik == 0) {
    std::cout << "Liczba jest parzysta" << std::endl;
  }

  else {
    std::cout << "Liczba jest nieparzysta" << std::endl;
  }

  /*
   * Bierzemy liczbę 12, która w postaci dwójkowej ma wartość 1100.
   * Liczba 1 w systemie dwójkowym ma postać 0001
   * Potem wykonujemy operacje bitowe z liczbą 1 i patrzymy na ostatni bit
   * Jeżeli ostatni bit jest równy 0, to liczba jest parzysta, jezeli ostatni bit jest równy 1, to liczba jest nieparzysta
   */
}

void czyParzystaModulo(int liczba) {
  if (liczba % 2 == 0) {
    std::cout << "Liczba jest parzysta" << std::endl;
  }


  else {
    std::cout << "Liczba jest nieparzysta" << std::endl;
  }
}

void czyParzystaWarunkowe(int liczba) {
  liczba % 2 == 0 ? std::cout << "Liczba jest parzysta" : std::cout << "Liczba jest nieparzysta" << std::endl;
}

int main() {
  int liczba;
  int wybor;
  std::cout << "Podaj liczbe: " << std::endl;
  std::cin >> liczba;
  std::cout << "Wybierz liczbe od 1 do 3 " << std::endl;
  std::cout << "1. Sprawdzanie za pomocą operacji bitowych" << std::endl;
  std::cout << "2. Sprawdzanie za pomocą modulo" << std::endl;
  std::cout << "3. Sprawdzanie za pomocą operatora warunkowego" << std::endl;
  std::cin >> wybor;

  switch (wybor) {
    case 1:
      czyParzystaBitowe(liczba);
      break;

    case 2:
      czyParzystaModulo(liczba);
      break;

    case 3:
      czyParzystaWarunkowe(liczba);
      break;


    default:
      std::cout << "Następnym razem wybierz liczbe od 1 do 3 " << std::endl;
  }
  return 0;
}

