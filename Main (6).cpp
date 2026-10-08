#include <iostream>
#include <vector>

using namespace std;

long long tinhTong(const vector<vector<int>>& mat, int n, int m) {
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += mat[i][j];
        }
    }
    return sum;
}

void xoaDong(vector<vector<int>>& mat, int& n, int m, int r) {
    if (r < 0 || r >= n) {
        cout << "Vi tri dong can xoa khong hop le!\n";
        return;
    }
    for (int i = r; i < n - 1; i++) {
        mat[i] = mat[i + 1];
    }
    n--;
    mat.pop_back(); 
}

int main() {
    int n, m;
    cout << "Nhap so dong N va so cot M: ";
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    cout << "Nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    long long tong = tinhTong(mat, n, m);
    cout << "Tong cac phan tu trong mang 2 chieu la: " << tong << endl;

    int r;
    cout << "Nhap chi so dong can xoa (tu 0 den n-1): ";
    cin >> r;
    
    xoaDong(mat, n, m, r);

    cout << "Mang 2 chieu sau khi xoa dong " << r << ":\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}