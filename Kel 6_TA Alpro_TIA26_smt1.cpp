#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// 1. DEKLARASI DATA
struct antrean {
    string nomor;
    string nama;
};

// 2. FUNGSI PENDUKUNG
void tampilHeader(string judul) {
    cout << "==================================================" << endl;
    cout << setw(35) << judul << endl;
    cout << "==================================================" << endl;
}

void tampilSpasi(int n) {
    for (int i = 0; i < n; i++) {
        cout << endl;
    }
}

// 3. FUNGSI TAMPILAN
antrean ambilAntrean(int n) {
    int pilihan;
    antrean antreanBaru;

    tampilHeader("AMBIL ANTREAN");
    cout << "Masukkan Nama Anda (Opsional): ";
    cin.ignore();
    getline(cin, antreanBaru.nama);

    antreanBaru.nomor = "A-" + to_string(n + 1);

    cout << endl;
    cout << "NOMOR ANTREAN BERHASIL DIBUAT!" << endl;
    cout << "+---------------+" << endl;
    cout << "| " << setw(13) << left << antreanBaru.nomor << "|" << endl;
    cout << "+---------------+" << endl;

    cout << "[-] Ketik angka untuk kembali: ";
    cin >> pilihan;
    tampilSpasi(100);

    return antreanBaru;
}

void lihatAntrean(antrean* daftarAntrean, int n) {
    int pilihan;
    tampilHeader("DAFTAR ANTREAN");

    if (n == 0) {
        cout << "Belum ada antrean." << endl;
        cout << "[1] Kembali: ";
        cin.ignore();
        cin >> pilihan;
        tampilSpasi(80);
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << "> " << daftarAntrean[i].nomor << " - "
             << daftarAntrean[i].nama << endl;
    }

    cout << "[1] Kembali: ";
    cin.ignore();
    cin >> pilihan;
    tampilSpasi(80);
}

int menuUtama() {
    int pilihan;
    tampilHeader("SISTEM ANTREAN KAMPUS");

    cout << endl;
    cout << setw(32) << "SELAMAT DATANG!" << endl;
    cout << endl;
    cout << setw(37) << "Layanan Pengambilan Nomor" << endl;
    cout << setw(30) << "dan Antrean" << endl;
    cout << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "MENU UTAMA" << endl << endl;
    cout << "[1] Pengguna" << endl;
    cout << "[2] Petugas" << endl;
    cout << "[3] Keluar" << endl << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Masukkan pilihan Anda: ";

    if (!(cin >> pilihan)) {
        cin.clear();
        cin.ignore(1000, '\n');
        return 0;
    }

    tampilSpasi(80);
    return pilihan;
}

int menuPengguna() {
    int pilihan;
    tampilHeader("MENU PENGGUNA");

    cout << "[1] Ambil Nomor Antrean" << endl;
    cout << "[2] Lihat Daftar Antrean" << endl;
    cout << "[3] Kembali" << endl << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;

    tampilSpasi(80);
    return pilihan;
}

bool loginPetugas() {
    const string sandiBenar = "admin123";
    string sandi;

    cout << "Masukkan sandi petugas: ";
    cin >> sandi;

    if (sandi == sandiBenar) {
        return true;
    }

    cout << "Sandi salah!" << endl;
    return false;
}

int menuPetugas(antrean* daftarAntrean, int n) {
    int pilihan;
    tampilHeader("MENU PETUGAS");

    if (n > 0) {
        cout << "Nomor sedang dilayani : " << daftarAntrean[0].nomor
             << " - " << daftarAntrean[0].nama << endl;
        cout << "Sisa antrean          : " << n - 1 << endl;
    } else {
        cout << "Tidak ada nomor yang sedang dilayani" << endl;
        cout << "Sisa antrean          : 0" << endl;
    }

    cout << "[1] Panggil Nomor Selanjutnya" << endl;
    cout << "[2] Keluar" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;

    tampilSpasi(80);
    return pilihan;
}

// 4. FUNGSI UTAMA
int main() {
    bool jalan = true;
    int n = 0;
    antrean* daftarAntrean = new antrean[n];

    do {
        int pilihan = menuUtama();

        switch (pilihan) {
            case 1: {
                int pilihanPengguna = menuPengguna();

                switch (pilihanPengguna) {
                    case 1: {
                        antrean antreanBaru = ambilAntrean(n);
                        antrean* arrayBaru = new antrean[n + 1];

                        for (int i = 0; i < n; i++) {
                            arrayBaru[i] = daftarAntrean[i];
                        }

                        arrayBaru[n] = antreanBaru;
                        delete[] daftarAntrean;
                        daftarAntrean = arrayBaru;
                        n++;
                        break;
                    }

                    case 2:
                        lihatAntrean(daftarAntrean, n);
                        break;

                    case 3:
                        break;

                    default:
                        cout << "Pilihan tidak tersedia!" << endl;
                        break;
                }
                break;
            }

            case 2: {
                if (!loginPetugas()) {
                    break;
                }

                int pilihanPetugas = 1;
                do {
                    pilihanPetugas = menuPetugas(daftarAntrean, n);

                    if (pilihanPetugas == 1) {
                        if (n <= 0) {
                            cout << "Tidak ada antrean!" << endl;
                            continue;
                        }

                        antrean* arrayBaru = new antrean[n - 1];
                        for (int i = 1; i < n; i++) {
                            arrayBaru[i - 1] = daftarAntrean[i];
                        }

                        delete[] daftarAntrean;
                        daftarAntrean = arrayBaru;
                        n--;
                    }
                } while (pilihanPetugas == 1);

                break;
            }

            case 3:
                jalan = false;
                break;

            default:
                cout << "(KESALAHAN) Masukkan pilihan 1, 2, atau 3!" << endl;
                break;
        }
    } while (jalan);

    delete[] daftarAntrean;
    cout << "Terima kasih telah menggunakan!" << endl;
    return 0;
}