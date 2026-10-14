#include <iostream>
#include <iomanip>
using namespace std;

int main (){

int countDigits(int n) {
int count = 0;
while (n > 0) {
count++;
n /= 10;
}
return count;
}
int main() {
int number = 123450;
cout << "Jumlah digit: " << countDigits(number) << endl;

int number = 012345;
cout << "Jumlah digit: " << countDigits(number) << endl;
}

    return 0;
}