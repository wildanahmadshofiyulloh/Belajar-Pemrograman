#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    const int SIZE = 5;
    double suhu[SIZE];
    double total = 0;

    cout << "Suhu Hari 1: ";
    cin >> suhu[0];
    cout << "Suhu Hari 2: ";
    cin >> suhu[1];
    cout << "Suhu Hari 3: ";
    cin >> suhu[2];
    cout << "Suhu Hari 4: ";
    cin >> suhu[3];
    cout << "Suhu Hari 5: ";
    cin >> suhu[4];

    
    for (int i = 0; i < SIZE; i++) {
        total += suhu[i];
    }

    
    double rataRata = total / SIZE;

   
    cout << fixed << setprecision(1);
    cout << "\nRata-rata Suhu: " << rataRata << endl;

    return 0;
}