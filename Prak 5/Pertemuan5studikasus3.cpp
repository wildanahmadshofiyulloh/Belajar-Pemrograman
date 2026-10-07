#include <iostream>
#include <iomanip>
using namespace std;
int main() {
int ulang;
do {
double kWh;
double tarifPerKwh = 0;
double totalAwal = 0;
double diskon = 0;
double totalAkhir = 0;
cout << "Masukkan penggunaan listrik (kWh): ";
cin >> kWh;
if (kWh <= 100) {
tarifPerKwh = 1500;
} else if (kWh <= 300) {
tarifPerKwh = 2000;
} else {
tarifPerKwh = 3000;
}
totalAwal = kWh * tarifPerKwh;
if (totalAwal > 1000000) {
diskon = 0.10 * totalAwal;
}
totalAkhir = totalAwal - diskon;
cout << fixed << setprecision(2);
cout << "Total Penggunaan Listrik: " << kWh << " kWh" << endl;
cout << "Total Tagihan Sebelum Diskon: Rp " << totalAwal << endl;
cout << "Diskon: Rp " << diskon << endl;
cout << "Total Tagihan Setelah Diskon: Rp " << totalAkhir << endl;
cout << "Ingin menghitung tagihan untuk penggunaan lain? (1 untuk ya, selain itu untuk tidak): ";
cin >> ulang;
cout << endl;
} while (ulang == 1);
return 0;
}