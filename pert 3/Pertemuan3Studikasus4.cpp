#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double jumlahRupiah, kursKonversi;

    
    cout << "Jumlah Rupiah: ";
    cin >> jumlahRupiah;
    cout << "Kurs Konversi: ";
    cin >> kursKonversi;

    double jumlahDollar = jumlahRupiah / kursKonversi;

    
    cout << fixed << setprecision(2);
    cout << "\nJumlah Rupiah: Rp " << jumlahRupiah << endl;
    cout << "Jumlah Dollar: $ " << jumlahDollar << endl;

    return 0;
}