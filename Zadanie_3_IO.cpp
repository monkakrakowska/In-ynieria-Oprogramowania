#include <iostream>
using namespace std;

/*POLECENIE:
Napisz funkcję zamieniającą odległość podaną w
kilometrach na mile lądowe i mile morskie. W funkcji
𝑚𝑎𝑖𝑛() wczytaj z klawiatury odległość w kilometrach,
wywołaj napisaną funkcję i wyświetl przeliczone
wartości.
*/
double km;

double przelicz_mile_ladowe(double km) {
	double wynik = km * 0.62137119;
		return wynik;
}

double przelicz_mile_morskie(double km) {
	double wynik = km / 1.852;
	return wynik;
}

int main() {
	cout << "Podaj odleglosc w km: ";
	cin >> km;
	cout << endl<<"Odlegosc w milach ladowych jest rowna: " << przelicz_mile_ladowe(km) << endl;
	cout << "Odlegosc w milach morskich jest rowna: " << przelicz_mile_morskie(km) << endl;

	return 0;
}
