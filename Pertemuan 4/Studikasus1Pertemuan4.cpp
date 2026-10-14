#include <iostream>
#include <iomanip>
using namespace std;

int main (){

string nama;
int posisi, tarif, jamkerja, gaji_total;
cout << "===== Data Karyawan =====\n";

cout << "Nama Karyawan: ";
cin >> nama;

cout << "Kode Posisi";
cin >> posisi;

cout << "Jam Kerja ";
cin >> jamkerja;

if (posisi ==1){
    tarif = 15000;
}else if (posisi == 2){
    tarif = 25000;
}else if (posisi == 3){
    tarif = 35000;
}else if (posisi == 4){
    tarif = 50000;
}else if (posisi == 3){
    tarif = 75000;
}



    return 0;
}