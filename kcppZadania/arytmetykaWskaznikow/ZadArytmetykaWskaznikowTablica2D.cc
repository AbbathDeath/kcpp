#include <iostream>

/* 
 * Zadanie 3.10 (LArytmetykaWskaznikowTablice.cc)
-------------------------------------
Pokazać w jakiej kolejności jest adresowana tablica dwuwymiarowa (Tab[3][3]).
Wypisać adresy poszczególnych elementów.
- nazwać program: ZadArytmetykaWskaznikowTablica2D.cc
 * 
 */

int main()
{
	int Tab[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	int (*wskaznikRzad) [3] = Tab;

	while (wskaznikRzad != Tab + 3)
	{
		int* wskaznikKolumna = *wskaznikRzad;
		int rzadIndeks = wskaznikRzad - Tab;


		while (wskaznikKolumna != *wskaznikRzad + 3)
		{
			int kolumnaIndeks = wskaznikKolumna - *wskaznikRzad;
			std::cout << "Tablica[" << rzadIndeks << "]["<< kolumnaIndeks << "]: " << wskaznikKolumna << " ";
			wskaznikKolumna++;
		}

		std::cout << std::endl;
		wskaznikRzad++;
	}

	return 0;
}