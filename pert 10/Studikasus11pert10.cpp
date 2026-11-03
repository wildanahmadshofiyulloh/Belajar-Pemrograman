#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num; // Memasukkan alamat memori 'num' ke dalam pointer 'ptr'

    cout << "Nilai: " << *ptr << endl; // Sekarang *ptr akan mengakses nilai 10

    return 0;
}