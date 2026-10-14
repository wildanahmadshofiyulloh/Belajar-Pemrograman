#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double jarak, konsumsiBahanBakar, hargaBahanBakar;

    cout << "Jarak Tempuh: ";
    cin >> jarak;
    cout << "Konsumsi Bahan Bakar: ";
    cin >> konsumsiBahanBakar;
    cout << "Harga Bahan Bakar: ";
    cin >> hargaBahanBakar;

    double totalBiaya = (jarak / konsumsiBahanBakar) * hargaBahanBakar;

    cout << fixed << setprecision(2);
    cout << "Total Biaya Bahan Bakar: Rp " << totalBiaya << endl;

    return 0;
}