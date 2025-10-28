#include <iostream>
using namespace std;

int main() {
    int n;
    float bilangan, total = 0, rata;

    cout << "Masukkan jumlah bilangan (N): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan bilangan ke-" << i << ": ";
        cin >> bilangan;
        total += bilangan;
    }

    rata = total / n;
    cout << "Rata-rata dari " << n << " bilangan adalah: " << rata << endl;

    return 0;
}
