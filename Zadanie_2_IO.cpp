#include <iostream>
using namespace std;

/*POLECENIE:
Napisz program, w którym u¿ytkownik podaje 10 liczb
zapamiêtywanych w tablicy statycznej AA. Program oblicza, ile z
tych liczb jest ujemnych i tworzy tablicê dynamiczn¹ BB, w której
zapamiêtuje te liczby (ujemne). Program wypisuje te liczby oraz
informacjê, ile ich by³o oraz ile liczb pominiêto.
*/


int main() {

	int AA[10];
	int licznik = 0;
	int y = 0;
	cout << "Podaj 10 liczb, aby sprawdzic ile z nich jest ujemnych: " << endl;
	for (int i = 0; i < 10; i++) {
		cin >> AA[i];
		cout << endl;
	}

	for (int i = 0; i < 10; i++) {
		if (AA[i] < 0) {
			licznik++;
		}

	}
	int* BB = new int[licznik];

	for (int i = 0; i < 10; i++) {
		if (AA[i] < 0) {
			BB[y] = AA[i];
			y++;
		}

	}
	cout << "Twoje liczby ujemne to: ";

	for (int i = 0; i < licznik; i++) {
		cout << BB[i] << " ";
	}

	cout << "\n\nLiczb ujemnych bylo: " << licznik <<"\n";

	delete[]BB;
	return 0;
}