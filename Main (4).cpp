#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu N: ";
    cin >> n;
    
    vector<double> a(n);
    double sum = 0;
    
    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    
    double trungBinh = sum / n;
    cout << "Gia tri trung binh cua day: " << trungBinh << endl;
    
    cout << "Cac phan tu lon hon hoac bang gia tri trung binh: ";
    for (int i = 0; i < n; i++) {
        if (a[i] >= trungBinh) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}