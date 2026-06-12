#include<iostream>
using namespace std;

// PASS BY VALUE //
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap function: " << "a: " << a << ", b:" << b << endl;
}

int main() {
    int a = 10, b = 20;
    cout << "Before swap: " << "a: " << a << ", b: " << b << endl;
    swap(a, b);
    cout << "After swap: " << "a: " << a << ", b: " << b << endl;
}