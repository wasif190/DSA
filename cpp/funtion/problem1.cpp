#include<iostream>
using namespace std;

int fac(int num) {
    int fac= 1;
    for (int i = 1; i <= num; i++) {
        fac *= i;
    }
    return fac;
}

void combination(int n, int r, int nr) {
    int c = fac(n) / (fac(r) * fac(nr));
    cout << "Combination: " << c << endl;
}

void permutation(int n, int nr) {
    int p = fac(n) / fac(nr);
    cout << "Permutation: " << p << endl;
}


int main() {
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;
    if (r > n) {
        cout << "Invalid input! r cannot be greater than n." << endl;
        return 0;
    }
    int nr = n-r;

    combination(n, r, nr);
    permutation(n, nr);
}