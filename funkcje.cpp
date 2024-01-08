#include "funkcje.h"
#include <stdexcept>

double Kalkulator::obliczLogarytmNaturalny(double x) {
    if (x <= 0) {
        throw std::domain_error("Nie mo¿na obliczyæ logarytmu naturalnego z liczby niedodatniej lub zera.");
    }
    return log(x);
}

double Kalkulator::obliczOdchylenieStandardowe(double arr[], int size) {
    if (size <= 0) {
        throw std::invalid_argument("Rozmiar tablicy musi byæ dodatni.");
    }

    double srednia = 0.0;
    for (int i = 0; i < size; ++i) {
        srednia += arr[i];
    }
    srednia /= size;

    double sumaKwadratowRoznic = 0.0;
    for (int i = 0; i < size; ++i) {
        sumaKwadratowRoznic += pow(arr[i] - srednia, 2);
    }

    return sqrt(sumaKwadratowRoznic / size);
}

double Kalkulator::obliczWartoscExponentu(double x) {
    return exp(x);
}
