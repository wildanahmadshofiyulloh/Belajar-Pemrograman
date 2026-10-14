#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << left << setw(10) << "Meter" 
         << setw(15) << "Sentimeter" 
         << setw(15) << "Milimeter" 
         << setw(12) << "Kilometer" << endl;

    for (int m = 1; m <= 10; m++) {
        double cm = m * 100.0;
        double mm = m * 1000.0;
        double km = m / 1000.0;

        cout << left << setw(10) << m 
             << setw(15) << cm 
             << setw(15) << mm 
             << setw(12) << km << endl;
    }

    return 0;
}