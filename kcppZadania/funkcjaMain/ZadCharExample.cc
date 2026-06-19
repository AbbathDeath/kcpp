#include <iostream>
#include <cstring>

/*Zadanie 1.2
Napisać program który zawiera przykłady funkcji z biblioteki cstring (plik: LChar.cc)
- nazwać program: ZadCharExample.cc
 */

        int main() {

            char test1[] = "Napisać program który zawiera przykłady funkcji z biblioteki cstring";

            std::cout << "Strlen(): " << std::endl;
            std::cout << "Tekst: " << test1 << std::endl;
            std::cout << "Wynik: " << strlen(test1) << std::endl;
            std::cout << std::endl;


            std::cout << "Strxfrm(): " << std::endl;
            std::cout << "Przed wywołaniem strxfrm: \n" << test1 << std::endl;
            char test1x[80];
            size_t wynikStrxfrm = strxfrm(test1x, test1, sizeof(test1x));

            std::cout << "Po wywołaniu strxfrm: " << std::endl;
            std::cout << test1x << std::endl;
            std::cout << "Zwrócona wartosc: " << wynikStrxfrm << std::endl;
            std::cout << std::endl;

            std::cout << "Strcoll():  " << std::endl;
            char test2[] = "Napisac program ktory zawiera przyklady funkcji z biblioteki cstring";
            int wynikStrcoll = strcoll(test1, test2);
            std::cout << "Porównywane teksty" << std::endl;
            std::cout << "Tekst 1: " << test1 << std::endl;
            std::cout << "Tekst 2:" << test2 << std::endl;
            std::cout << "Wynik po wywołaniu Strcoll():" << std::endl;

            if (wynikStrcoll > 0) {
                std::cout << "Tekst 1 jest większy od Tekst 2" << std::endl;
            }
            else if (wynikStrcoll < 0) {
                std::cout << "Tekst1 jest mniejszy od Tekst2" << std::endl;
            }
            else {
                std::cout << "Tekst1 jest równy Tekst2" << std::endl;
            }
            //char test3[] = "program";
            char test3[] = "nieprogram";
            std::cout << std::endl;
            std::cout << "Strstr(): " << std::endl;
            std::cout << "Tekst oryginalny: " << test1 << std::endl;
            std::cout << "Szukany tekst: " << test3 << std::endl;

            if (strstr(test1, test3)) {
                std::cout << "Tekst został znaleziony" << std::endl;
            }
            else {
                    std::cout << "Niestety nie udało się znaleźć szukanego tekstu." << std::endl;
            }

            std::cout << std::endl;
            std::cout << "Strspn(): " << std::endl;
            size_t wynikStrspn = strspn(test2,  "Napisac");
            std::cout << "Tekst oryginalny: " << test2 << std::endl;
            std::cout << "Szukany tekst: " << "Napisac" << std::endl;


            std::cout << "Wynik po wywołaniu strspn: " << wynikStrspn << std::endl;

            std::cout << std::endl;
            std::cout << "Strrchr(): " << std::endl;
            char* p =   strrchr(test1, 'u');
            std::cout << "Tekst oryginalny: " << test1 << std::endl;
            std::cout << "Szukany znak: " << 'u'  << std::endl;
            std::cout << "Wynik po wywołaniu strrchr(): " << p - test1 + 1 << std::endl;

            std::cout << std::endl;
            std::cout << "Strpbrk(): " << std::endl;
            char test4[] = "string";
            char* wynikStrpbrk = strpbrk(test1, test4);
            std::cout << "Tekst oryginalny: " << test1 << std::endl;
            std::cout << "Szukany tekst: " << test4 << std::endl;

            std::cout << "Wynik po wywołaniu strrpbrk(): " << std::endl;

            if (wynikStrpbrk != NULL) {
                std::cout << "Pierwszy znalieziony znak w tekscie 1: " << *wynikStrpbrk << "na pozycji " << wynikStrpbrk - test1 + 1 << std::endl;

            }
            else {
                std::cout << "Niestety nie udało się znaleźć szukanego znaku." << std::endl;
            }


            std::cout << std::endl;
            char test5[] = "program";
            std::cout << "Strcspn(): " << std::endl;
            std::cout << "Tekst oryginalny: " << test1 << std::endl;
            std::cout << "Szukany tekst: " << test5 << std::endl;

            size_t wynikStrcspn = strcspn(test1, test5);

            std::cout << "Wynik po wywoływaniu strcspn():  " << std::endl;

            if (wynikStrcspn < strlen(test1)) {
                std::cout << "Liczba znaków przed pasującym znakiem: " << wynikStrcspn << std::endl;
            }
            else {
                std::cout << test1 << "Żaden znak nie pasuje" << std::endl;
            }

            return 0;
        }


    /* * strxfrm()
       * strcoll()
       * strlen()
       * strstr()
       * strspn()
       * strrchr()
       * strpbrk()
       * strcspn()*/