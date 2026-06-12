#include<iostream>
using namespace std;

int fac(int num) {
    int fac= 1;
    for (int i = 1; i <= num; i++) {
        fac *= i;
    }
    return fac;
}

int combination(int n, int r) {
   
    int c = fac(n) / (fac(r) * fac(n-r));;
    return c;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << combination(i, j) << " "; // icj
        }
        cout << endl;
    }
}