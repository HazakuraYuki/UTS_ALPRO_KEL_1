#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double sisi;
	cout << "Masukkan panjang sisi persegi: ";
	if (!(cin >> sisi)) {
		cerr << "Input tidak valid. Masukkan angka.\\n";
		return 1;
	}

	if (sisi < 0) {
		cerr << "Panjang sisi tidak boleh negatif.\n";
		return 1;
	}

	double luas = sisi * sisi;

	cout << fixed << setprecision(2);
	cout << "Luas persegi dengan sisi " << sisi << " adalah " << luas << "\n";
	return 0;
}

