#include "ZadArytmetykaWsk.h"
#include <string>
#include <iostream>

std::string ZadArytmetykaWsk::Opis() {
  return "Funkcja wypisująca na ekran wartości zmiennych za pomocą wskaźnika zgodnie z przykładem z LArytmetykaWskaznikowZmienne.cc.\n";

};

void ZadArytmetykaWsk::Uruchom() {
  int tablica2[3] = {0, 0, 0};

  funkcja2(tablica2);

  std::cout << std::endl;

}

void ZadArytmetykaWsk::funkcja2(int* tablica) {
  int* ptr = tablica + 1;


  std::cout << "1. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  *ptr += 10;
  std::cout << "2. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  // B - C
  ptr++;
  *ptr += 20;
  std::cout << "3. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  //C - B
  ptr--;
  *ptr += 20;
  std::cout << "4. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  // B - A
  ptr--;
  *ptr += 40;
  std::cout << "5. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  // A - B
  ptr++;
  *ptr += 20;
  std::cout << "6. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  // B - C
  ptr++;
  *ptr += 40;
  std::cout << "7. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  // C - B
  ptr--;
  *ptr += 20;
  std::cout << "8. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  // B - A
  ptr--;
  *ptr += 40;
  std::cout << "9. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;

  // A - C
  ptr++;
  *ptr += 20;
  std::cout << "10. A, B, C: " << tablica[0] << " " << tablica[1] << " " << tablica[2] <<std::endl;
}