#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double jarak, efisiensi, hargaPerLiter;

    cout << "=== KALKULATOR BIAYA PERJALANAN ===" << endl;
    cout << "Masukkan jarak tempuh (km): ";
    cin >> jarak;
    cout << "Masukkan konsumsi bahan bakar (km/l): ";
    cin >> efisiensi;
    cout << "Masukkan harga bahan bakar per liter (Rp): ";
    cin >> hargaPerLiter;

    double totalLiter = jarak / efisiensi;
    double totalBiaya = totalLiter * hargaPerLiter;

    cout << fixed << setprecision(2);
    cout << "\n=======================================" << endl;
    cout << "           HASIL PERJALANAN            " << endl;
    cout << "=======================================" << endl;
    cout << "Jarak Tempuh        : " << jarak << " km" << endl;
    cout << "Konsumsi Bahan Bakar: " << efisiensi << " km/l" << endl;
    cout << "Total Bahan Bakar   : " << totalLiter << " liter" << endl;
    cout << "Total Biaya         : Rp " << totalBiaya << endl;
    cout << "Status Efisiensi    : ";
    
    if (efisiensi > 15.0) {
        cout << "Efisien" << endl;
    } else if (efisiensi >= 10.0 && efisiensi <= 15.0) {
        cout << "Cukup Efisien" << endl;
    } else {
        cout << "Boros" << endl;
    }
    cout << "=======================================" << endl;

    return 0;
}