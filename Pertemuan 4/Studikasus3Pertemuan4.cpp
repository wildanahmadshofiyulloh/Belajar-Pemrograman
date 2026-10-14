#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main() {
    
    cout << "=== KALKULATOR BANGUN RUANG ===" << endl;
    cout << "1. Balok" << endl;
    cout << "2. Tabung" << endl;
    cout << "3. Kubus" << endl;
    cout << "4. Kerucut" << endl;
    cout << "-------------------------------" << endl;

    int pilihan;
    cout << "Pilih nomor bangun ruang (1-4): ";
    cin >> pilihan;
    cout << endl;

    
    cout << fixed << setprecision(2);

    switch (pilihan) {
        case 1: {
            
            double panjang, lebar, tinggi;
            cout << "--- Hitung Balok ---" << endl;
            cout << "Masukkan panjang : ";
            cin >> panjang;
            cout << "Masukkan lebar   : ";
            cin >> lebar;
            cout << "Masukkan tinggi  : ";
            cin >> tinggi;

            double volume = panjang * lebar * tinggi;
            double luasPermukaan = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));

            cout << "\n--- Hasil Perhitungan Balok ---" << endl;
            cout << "Volume          : " << volume << endl;
            cout << "Luas Permukaan  : " << luasPermukaan << endl;
            break;
        }
        case 2: {
            
            double r, tinggi;
            cout << "--- Hitung Tabung ---" << endl;
            cout << "Masukkan jari-jari alas : ";
            cin >> r;
            cout << "Masukkan tinggi tabung  : ";
            cin >> tinggi;

            double volume = M_PI * r * r * tinggi;
            double luasPermukaan = 2 * M_PI * r * (r + tinggi);

            cout << "\n--- Hasil Perhitungan Tabung ---" << endl;
            cout << "Volume          : " << volume << endl;
            cout << "Luas Permukaan  : " << luasPermukaan << endl;
            break;
        }
        case 3: {
            
            double sisi;
            cout << "--- Hitung Kubus ---" << endl;
            cout << "Masukkan panjang sisi : ";
            cin >> sisi;

            double volume = pow(sisi, 3);
            double luasPermukaan = 6 * (sisi * sisi);

            cout << "\n--- Hasil Perhitungan Kubus ---" << endl;
            cout << "Volume          : " << volume << endl;
            cout << "Luas Permukaan  : " << luasPermukaan << endl;
            break;
        }
        case 4: {
            
            double r, tinggi;
            cout << "--- Hitung Kerucut ---" << endl;
            cout << "Masukkan jari-jari alas : ";
            cin >> r;
            cout << "Masukkan tinggi kerucut : ";
            cin >> tinggi;

            double garisPelukis = sqrt((r * r) + (tinggi * tinggi));
            double volume = (1.0 / 3.0) * M_PI * r * r * tinggi;
            double luasPermukaan = M_PI * r * (r + garisPelukis);

            cout << "\n--- Hasil Perhitungan Kerucut ---" << endl;
            cout << "Volume          : " << volume << endl;
            cout << "Luas Permukaan  : " << luasPermukaan << endl;
            break;
        }
        default:
            cout << "Pilihan menu tidak valid!" << endl;
            break;
    }

    return 0;
}