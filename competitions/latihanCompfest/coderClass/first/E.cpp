#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;

    int a[t];
    // O log(t)
    for (int i = 0; i < t; i++) {
        cin >> a[i];
    }

    for (int result : a) {
        cout << 6 * result * result << endl;
    }
}