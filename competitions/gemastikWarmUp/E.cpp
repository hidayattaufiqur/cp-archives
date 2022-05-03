#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 6;
    int a[n], v[n];
    int adhi = 0;
    int vijay = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i<n;i++) {
        for (int j = 0; j<n ;j++) {
            if (a[i] > v[j]) {
                adhi++;
            }
            if (v[i] > a[j]) {
                vijay++;
            }
        }
    }

    int gcd = __gcd(adhi, 36);

    if (adhi > vijay) {
        cout << "Adhi menang dengan peluang " << adhi/gcd << "/" << 36 /gcd;
    } else if (adhi < vijay) {
        cout << "Vijay menang dengan peluang " << vijay/gcd << "/" << 36/gcd;
    } else {
        cout << "Imbang";
    }



    // cout << adhi;
}