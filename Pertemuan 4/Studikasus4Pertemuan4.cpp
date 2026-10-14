#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   
    cout << "=== KALKULATOR KONVERSI MATA UANG (DARI RUPIAH) ===" << endl;
    cout << "1. US Dollar (USD) - Kurs: Rp 15,500" << endl;
    cout << "2. Euro (EUR)      - Kurs: Rp 16,800" << endl;
    cout << "3. Japanese Yen (JPY) - Kurs: Rp 105" << endl;
    cout << "4. Indian Rupee (INR) - Kurs: Rp 185" << endl;
    cout << "5. Saudi Riyal (SAR)  - Kurs: Rp 4,130" << endl;
    cout << "6. South Korean Won (KRW) - Kurs: Rp 11.5" << endl;
    cout << "7. Malaysian Ringgit (MYR) - Kurs: Rp 3,300" << endl;
    cout << "8. Thai Baht (THB) - Kurs: Rp 440" << endl;
    cout << "-----------------------------------------------" << endl;

    int pilihan;
    cout << "Pilih mata uang tujuan (1-8): ";
    cin >> pilihan;

    double jumlahRupiah;
    cout << "Masukkan jumlah uang dalam Rupiah (Rp): ";
    cin >> jumlahRupiah;

    double kurs = 0;
    string namaMataUang = "";
    string simbolMataUang = "";

    
    switch (pilihan) {
        case 1:
            namaMataUang = "US Dollar";
            simbolMataUang = "USD";
            kurs = 15500.0;
            break;
        case 2:
            namaMataUang = "Euro";
            simbolMataUang = "EUR";
            kurs = 16800.0;
            break;
        case 3:
            namaMataUang = "Japanese Yen";
            simbolMataUang = "JPY";
            kurs = 105.0;
            break;
        case 4:
            namaMataUang = "Indian Rupee";
            simbolMataUang = "INR";
            kurs = 185.0;
            break;
        case 5:
            namaMataUang = "Saudi Riyal";
            simbolMataUang = "SAR";
            kurs = 4130.0;
            break;
        case 6:
            namaMataUang = "South Korean Won";
            simbolMataUang = "KRW";
            kurs = 11.5;
            break;
        case 7:
            namaMataUang = "Malaysian Ringgit";
            simbolMataUang = "MYR";
            kurs = 3300.0;
            break;
        case 8:
            namaMataUang = "Thai Baht";
            simbolMataUang = "THB";
            kurs = 440.0;
            break;
        default:
            cout << "Pilihan mata uang tidak valid!" << endl;
            return 0;
    }

    
    double hasilKonversi = jumlahRupiah / kurs;

    
    cout << "\n=======================================" << endl;
    cout << "            HASIL KONVERSI             " << endl;
    cout << "=======================================" << endl;
    cout << fixed << setprecision(2);
    cout << "Jumlah Rupiah Asal : Rp " << jumlahRupiah << endl;
    cout << "Mata Uang Tujuan   : " << namaMataUang << " (" << simbolMataUang << ")" << endl;
    cout << "Hasil Konversi     : " << simbolMataUang << " " << hasilKonversi << endl;
    cout << "=======================================" << endl;

    return 0;
}