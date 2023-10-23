#include <iostream>
using namespace std;

/*POLECENIE:
Informacje o produkcie zawieraj¹ jego nazwê (tekst) i cenê
(liczba rzeczywista). Napisz program, który pobiera od
u¿ytkownika informacje o 10 produktach i wypisze produkty od
najdro¿szych do najtañszych. Do przechowywania u¿yj
odpowiedniej struktury.
*/

struct Produkt {
	string nazwa;
	double cena;

};

int main() {
	Produkt roboczy;
	Produkt produkt[10];
	Produkt max_cena;
	max_cena.cena = 0;
	cout << "Podaj 10 produktow (nazwe i cene):\n";
	for (int i = 0; i < 10; i++) {
		cin >> produkt[i].nazwa;
		cin >> produkt[i].cena;
		cout << endl;
			}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10 - i ; j++) {
			if (produkt[j].cena < produkt[j + 1].cena) {
				Produkt roboczy = produkt[j];
				produkt[j] = produkt[j + 1];
				produkt[j + 1] = roboczy;
			}
		}
	}


	cout << "Oto twoje produkty posortowane od najdrozszych do najtanszych:\n";
	for (int i = 0; i < 10; i++) {
		cout << produkt[i].nazwa << " " << produkt[i].cena << "\n";
	}


	return 0;
}