#include <iostream>
using namespace std;

/*POLECENIE:
Napisz program, kt�ry wypisuje wszystkie liczby nieparzyste z
przedzia�u <300;1200> oddzielone spacj�. Po pe�nych setkach
ma by� nie spacja lecz sekwencja � *** � (spacja gwiazdki
spacja). Po wielokrotno�ciach 400 ma by� bezpo�rednie
przej�cie do nowego wiersza (bez spacji lub sekwencji znak�w).
*/
/*
int main() {


	for ( int i=300; i<=1200; i++) {
		if (i % 400 == 0) {
			cout << endl;
		}
		
		else if (i % 2 == 1) {			
			cout << i << " ";
			if (i%100==99) {
			cout << "*** ";}
		}
	}

	

	return 0;
}*/