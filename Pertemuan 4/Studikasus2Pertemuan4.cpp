#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    
    cout << "=== DAFTAR BARANG RUMAH / KOS ===" << endl;
    cout << "1. Beras 5kg     - Rp 65000" << endl;
    cout << "2. Minyak Goreng - Rp 18500" << endl;
    cout << "3. Telur 1kg     - Rp 26000" << endl;
    cout << "4. Mie Instan    - Rp 3000" << endl;
    cout << "5. Sabun Mandi   - Rp 5000" << endl;
    cout << "--------------------------------" << endl;

    int pilihan;
    double hargaAsli = 0;
    string namaBarang = "";

    
    cout << "Pilih nomor barang (1-5): ";
    cin >> pilihan;

    
    switch (pilihan) {
        case 1:
            namaBarang = "Beras 5kg";
            hargaAsli = 65000;
            break;
        case 2:
            namaBarang = "Minyak Goreng";
            hargaAsli = 18500;
            break;
        case 3:
            namaBarang = "Telur 1kg";
            hargaAsli = 26000;
            break;
        case 4:
            namaBarang = "Mie Instan";
            hargaAsli = 3000;
            break;
        case 5:
            namaBarang = "Sabun Mandi";
            hargaAsli = 5000;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            return 0; 
    }

    double diskonPersen, besarDiskon, hargaAkhir;

    
    cout << "Masukkan persentase diskon (contoh: 10 untuk 10%): ";
    cin >> diskonPersen;

    
    besarDiskon = hargaAsli * (diskonPersen / 100);
    hargaAkhir = hargaAsli - besarDiskon;

    
    cout << "\n================================" << endl;
    cout << "         STRUK BELANJA          " << endl;
    cout << "================================" << endl;
    cout << "Barang terpilih  : " << namaBarang << endl;
    cout << fixed << setprecision(2);
    cout << "Harga Asli       : Rp " << hargaAsli << endl;
    cout << "Diskon (" << diskonPersen << "%)   : Rp " << besarDiskon << endl;
    cout << "Harga Akhir      : Rp " << hargaAkhir << endl;
    cout << "================================" << endl;

    return 0;
}