#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int lagi, jmlbr;
float hb, diskon=0, hd;
double tot=0, tothd;
double tothb;

do {
    cout << left << "Jumlah barang: ";
    cin >> jmlbr;
for (int i=1; i <= jmlbr; i++){

cout << "Masukkan harga barang ke-" << i << ": Rp";
cin >> hb;

tot += hb;
}

cout << "Total Harga: Rp" << tot << endl;


if (tot >= 500000){
    diskon = 10;
    cout << "Diskon: " << diskon << endl;
}else if (tot >= 250000){
    diskon = 5;
    cout << "Diskon: " << diskon << endl;
}else {
    diskon = 0;
}

tothd = tot * diskon/100;

cout << "Total diskon: " << tothd<< endl;

tothb = tot - tothd;

cout << "Total setelah diskon: Rp" << tothb << endl;
cout << "Ingin menambah belanjaan lagi? (1 = Ya, selain itu = Tidak): ";
cin >> lagi;

}while(lagi == 1);



    return 0;
}