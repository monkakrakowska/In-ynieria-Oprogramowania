#include <iostream>
#include "funkcje.h"

int main() {
    Kalkulator kalkulator;

    // Testy funkcji
    try {
        double logarytm = kalkulator.obliczLogarytmNaturalny(2.0);
        std::cout << "Logarytm naturalny z 2: " << logarytm << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "B³¹d: " << e.what() << std::endl;
    }

    double tablica[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    try {
        double odchylenie = kalkulator.obliczOdchylenieStandardowe(tablica, rozmiar);
        std::cout << "Odchylenie standardowe: " << odchylenie << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "B³¹d: " << e.what() << std::endl;
    }

    double exponent = kalkulator.obliczWartoscExponentu(1.0);
    std::cout << "Exponent z 1: " << exponent << std::endl;

    return 0;
}
