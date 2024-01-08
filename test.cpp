#include "gtest/gtest.h"
#include "funkcje.h"

TEST(LogarytmTest, DodatniaLiczba) {
    Kalkulator kalkulator;
    ASSERT_NO_THROW(kalkulator.obliczLogarytmNaturalny(2.0));
}

TEST(LogarytmTest, ZeroLubUjemnaLiczba) {
    Kalkulator kalkulator;
    ASSERT_THROW(kalkulator.obliczLogarytmNaturalny(0.0), std::domain_error);
}

TEST(OdchylenieTest, PoprawnaTablica) {
    Kalkulator kalkulator;
    double tablica[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
    ASSERT_NO_THROW(kalkulator.obliczOdchylenieStandardowe(tablica, rozmiar));
}

TEST(OdchylenieTest, PustaTablica) {
    Kalkulator kalkulator;
    double tablica[] = {};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
    ASSERT_THROW(kalkulator.obliczOdchylenieStandardowe(tablica, rozmiar), std::invalid_argument);
}

TEST(ExponentTest, DowolnaLiczba) {
    Kalkulator kalkulator;
    ASSERT_DOUBLE_EQ(kalkulator.obliczWartoscExponentu(1.0), exp(1.0));
}
