#include <iostream>
#include <cstdlib>  // dla rand()
#include <ctime>    // dla time()
using namespace std;

/*
*Zadanie 4.15
------------------------------------
W programie ZadStudent/LGra.cc ogranicz liczbę prób do 10. Jeśli gracz nie zgadnie, program ma wyświetlić prawidłową liczbę.
Dodaj poziomy trudności (np. zakres 1-50 dla łatwego, 1-200 dla trudnego).
 */


int main() {
  srand(time(0));
  int wylosowana;
  int proba, licznik = 0;
  int wybor;

  cout << "Wybierz poziom: " << std::endl;
  cout << "1 - łatwy" << std::endl;
  cout << "2 - trudny" << std::endl;

  cin >> wybor;


  switch (wybor) {
    case 1:
      wylosowana = rand() % 50 + 1;
      cout << "Zgadnij liczbe (1-50):" << endl;
      break;

    case 2:
      wylosowana = rand() % 200 + 1;
      cout << "Zgadnij liczbe (1-200):" << endl;
      break;

    default:
      cout << "Następnym razem wyberz poprawny poziom:" << endl;
      break;

  }


  while (true) {
    cin >> proba;
    licznik++;
      if (proba < wylosowana) {
        cout << "Za malo! Probuj dalej." << endl;
      } else if (proba > wylosowana) {
        cout << "Za duzo! Probuj dalej." << endl;
      } else {
        cout << "Brawo! Zgadles w " << licznik << " probach." << endl;
        break;  // przerywa pętlę
      }
      if (licznik >= 10) {
        cout << "Poprawna liczba: " << wylosowana << endl;
        break;
      }
    }

  return 0;
}