#include <iostream>
#include <cmath>

using namespace std;

int timGCD(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void rutGonPhanSo(int& a, int& b) {
    if (b == 0) {
        cout << "Mau so khong the bằng 0!\n";
        return;
    }
    int gcd = timGCD(a, b);
    a /= gcd;
    b /= gcd;
    
    if (b < 0) {
        a = -a;
        b = -b;
    }
}

int main() {
    int a, b;
    cout << "Nhap tu so a: "; cin >> a;
    cout << "Nhap mau so b: "; cin >> b;

    rutGonPhanSo(a, b);

    cout << "Phan so sau khi rut gon: " << a << "/" << b << endl;
    return 0;
}