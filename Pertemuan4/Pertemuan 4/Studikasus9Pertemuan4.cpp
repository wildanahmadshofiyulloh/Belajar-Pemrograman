#include <iostream>
#include <iomanip>
using namespace std;

int main(){

float ukuran, cm, mm, km;
string konversi;

cout << "Masukkan Ukuran (m): ";
cin >> ukuran;
cout << "Konversi ukuran menjadi: ";
cin >> konversi;


cm = ukuran * 100;
mm = ukuran * 1000;
km = ukuran / 1000;

if (konversi == "cm"){
    cout << "Hasil Konversi: " << cm << " cm";
}else if (konversi == "km"){
    cout << "Hasil Konversi: " << km << " km";
}else if (konversi == "mm"){
   cout << "Hasil Konversi: " << mm << " mm";
}




    return 0;
}
