#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double panjang, lebar, tinggi, hargaPerLiter;

    cout << "=== KALKULATOR BIAYA CAT DINDING ===" << endl;
    cout << "Masukkan panjang ruangan (m) : ";
    cin >> panjang;
    cout << "Masukkan lebar ruangan (m)   : ";
    cin >> lebar;
    cout << "Masukkan tinggi ruangan (m)  : ";
    cin >> tinggi;
    cout << "Masukkan harga cat per liter (Rp): ";
    cin >> hargaPerLiter;

  
    double luasDinding = 2 * ((panjang * tinggi) + (lebar * tinggi));
    
   
    double jumlahCat = luasDinding / 10.0;

    
    double totalBiaya = jumlahCat * hargaPerLiter;

    
    cout << fixed << setprecision(2);
    cout << "\n=======================================" << endl;
    cout << "          HASIL PERHITUNGAN CAT        " << endl;
    cout << "=======================================" << endl;
    cout << "Luas Dinding Total   : " << luasDinding << " m2" << endl;
    cout << "Jumlah Cat Dihasilkan: " << jumlahCat << " liter" << endl;
    cout << "Total Biaya          : Rp " << totalBiaya << endl;
    cout << "Kategori Kebutuhan   : ";

    
    if (jumlahCat > 10.0) {
        cout << "Banyak Cat Dibutuhkan" << endl;
    } else if (jumlahCat >= 5.0 && jumlahCat <= 10.0) {
        cout << "Sedang" << endl;
    } else {
        cout << "Sedikit" << endl;
    }
    cout << "=======================================" << endl;

    return 0;
}