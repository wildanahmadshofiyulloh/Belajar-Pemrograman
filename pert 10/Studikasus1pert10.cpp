#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    cout << "Elemen array: ";
    
    // PERBAIKAN: Gunakan i < 5 (atau i <= 4)
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }

    cout << endl;
    return 0;
}