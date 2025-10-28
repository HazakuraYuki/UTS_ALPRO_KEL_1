#include <iostream>
using namespace std;

int main() {
	cout << "Masukkan satu bilangan bulat: ";
	long long n;
	if (!(cin >> n)) {
		cout << "Input tidak valid. Harap masukkan bilangan bulat." << endl;
		return 1;
	}

	if (n % 2 == 0) {
		cout << "Bilangan " << n << " adalah genap." << endl;
	} else {
		cout << "Bilangan " << n << " adalah ganjil." << endl;
	}

	return 0;
}

