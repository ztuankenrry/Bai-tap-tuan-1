#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    
    long long giaiThua = 1; 
    for (int i = 2; i <= n; i++) {
        giaiThua *= i;
    }
    
    cout << n << "! = " << giaiThua << endl;
    return 0;
}