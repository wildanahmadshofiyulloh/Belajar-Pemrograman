#include <iostream>
#include <iomanip>
using namespace std;

int main (){

double nilai, rata, semua;
int jmlh;
int jumlah;

cout << "Nilai yang ingin dimasukkan: ";
cin >> jmlh;


for (int i=1; i <= jmlh; i++ ){
cout << "Masukkan Nilai ke-" << i << ":";
cin >> nilai;

semua = semua + nilai;
}

rata = semua / jmlh;
cout << "Rata-rata nilai: " << rata << endl;

if (rata >= 85){
    cout << "Perstasi: Sangat baik" << endl;
}else if (rata <= 85 && rata >= 70){
    cout << "Perstasi: Baik"<< endl;
}else if (rata <=70 && rata >= 50){
    cout << "Perstasi: Cukup" << endl;
}else{
    cout << "Perstasi: Perlu Peningkatan" << endl;
}

cout << "Ingin menghitung nilai siswa lain? (1 ya/ 0 tidak): ";
cin >> jumlah;

while (jumlah == 1);{

}

    return 0;
}