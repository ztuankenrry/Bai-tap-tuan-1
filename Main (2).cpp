#include <iostream>
#include <vector>

using namespace std;

void sapXepTangDan(vector<int>& a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Đổi chỗ 2 phần tử
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;
    vector<int> a(n);
    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; i++) cin >> a[i];

    sapXepTangDan(a, n);

    cout << "Day sau khi sap xep tang dan: ";
    for (int i = 0; i < n; i++) cout << a[i] + " "; // Hoặc cout << a[i] << " ";
    cout << endl;
    return 0;
}