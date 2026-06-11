#include <iostream>

/*  
 *  Zadanie 3.9 (LArytmetykaWskaznikowTablice.cc)git
 * Operacje na dwóch tablicach z użyciem wskaźników
Napisz program, który:
- Zadeklaruje dwie tablice liczb zmiennoprzecinkowych o rozmiarze 5.
- Wypełni pierwszą tablicę wartościami podanymi przez użytkownika, a drugą tablicę wartościami pierwszej tablicy pomnożonymi przez 2 (używając wyłącznie wskaźników).
- Stworzy trzecią tablicę, która będzie zawierała sumy odpowiadających sobie elementów z dwóch pierwszych tablic (używając arytmetyki wskaźników).
- Wyświetli zawartość wszystkich trzech tablic, używając wskaźników do iteracji po elementach.
Nazwać program: ZadArytmetykaWskaznikowTabliceB.cc

 * 
 */

int main()
{
	float tablicaA[5];
	float tablicaB[5];
	float tablicaC[5];

	float* ptr = tablicaA;
	

	while (ptr != tablicaA + 5)
	{
		std::cin >> *ptr;
		ptr++;
	}

	ptr = tablicaA;

	std::cout << "Tablica A: ";
	while (ptr != tablicaA + 5)
	{
		std::cout << *ptr << " ";
		ptr++;
	}
	std::cout << std::endl;

	float* ptr1 = tablicaA;
	float* ptr2 = tablicaB;

	while (ptr1 != tablicaA + 5)
	{
		*ptr2 = *ptr1 * 2;
		ptr1++;
		ptr2++;
	}

	ptr2 = tablicaB;

	std::cout << "Tablica B: ";
	while (ptr2 != tablicaB + 5)
	{
		std::cout << *ptr2 << " ";
		ptr2++;
	}
	std::cout << std::endl;


	ptr1 = tablicaA;
	ptr2 = tablicaB;

	float* ptr3 = tablicaC;

	while (ptr1 != tablicaA + 5)
	{
		*ptr3 = *ptr1 + *ptr2;
		ptr1++;
		ptr2++;
		ptr3++;

	}

	ptr3 = tablicaC;

	std::cout << "Tablica C: ";
	while (ptr3 != tablicaC + 5)
	{
		std::cout << *ptr3 << " ";
		ptr3++;
	}
	std::cout << std::endl;

	//for (int i = 0; i < 5; i++) {
	//	std::cout << tablicaC[i] << " ";
	//}
	//std::cout << std::endl;

	

	return 0;
}