#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int p;
    int Num;
    bool isPerfect = false;

    cout << "Enter Num\n";
    cin >> Num;

    for (p = 2; p < 10; p++) {
        if (Num == (pow(2, p - 1) * (pow(2, p) - 1))) {
            cout << Num << " is a Perfect number!\n";
            isPerfect = true;
            break;
        }
    }

    if (!isPerfect) {
        cout << Num << " is not a Perfect number!\n";
    }

    return 0;
}