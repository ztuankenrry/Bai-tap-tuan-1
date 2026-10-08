#include <iostream>
#include <vector>

using namespace std;

void xoaPhanTu(vector<int>& a, int& n, int k) {
    if (k < 0 || k >= n) {
        cout << "Vi tri xoa khong hop le!\n";
        return;
    }
    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--; 
}

void chenPhanTu(vector<int>& a, int& n, int m, int y) {
    if (m < 0 || m > n) {
        cout << "Vi tri chen khong hop le!\n";
        return;
    }
    a.push_back(0); 
    for (int i = n; i > m; i--) {
        a[i] = a[i - 1];
    }
    a[m] = y;
    n++; 

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;
    vector<int> a(n);
    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; i++) cin >> a[i];

    int k;
    cout << "Nhap vi tri k can xoa (tu 0 den n-1): ";
    cin >> k;
    xoaPhanTu(a, n, k);
    
    cout << "Mang sau khi xoa: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    int m, y;
    cout << "Nhap gia tri y can chen va vi tri m can chen: ";
    cin >> y >> m;
    chenPhanTu(a, n, m, y);

    cout << "Mang sau khi chen: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}