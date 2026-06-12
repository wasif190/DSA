#include<iostream>
using namespace std;

int gcd(int a, int b) {
    int hcf = 1;
    // ex: 12 and 18
    // min(12, 18) --> i = 12, 11, 10, ....
    // this is optimized
    for (int i = min(a, b); i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
            break;
        }
    }

    return hcf;
}

int main() {
    int a, b;
    cout << "Enter 1st and 2nd numbers: ";
    cin >> a >> b;
    cout << gcd(a,b) << endl;
}