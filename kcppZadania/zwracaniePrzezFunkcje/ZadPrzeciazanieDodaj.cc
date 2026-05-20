#include <iostream>
#include <string>

int dodaj (int a, int b) {
    return a + b;
}

double dodaj (double a, double b) {
    return a + b;
}

std::string dodaj (std::string a, std:: string b) {
    return a + b;
}

int main() {
    std::cout << "Dodawanie dwoch liczb calkowitych: " << dodaj (1, 2) << std::endl;
    std::cout << "Dodawanie dwoch liczb zmiennoprzecinkowych: " << dodaj (3.4, 4.5) << std::endl;
    std::cout << "Konkatenacja dwoch napisow: " << dodaj ("Funkcja ", "Dodaj" ) << std::endl;
    return 0;
}