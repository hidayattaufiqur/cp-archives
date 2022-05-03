#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    ll minimum, maksimum, pres_diskon, ppi, qty, total;
    cin >> minimum >> pres_diskon >> maksimum >> ppi >> qty;
    total = (ppi * qty);
    double disc = pres_diskon/100.0;
    double tDisc = total * disc;
    if (total >= minimum) {
        if (tDisc >= maksimum) {
            double ans = total - maksimum;
            cout << ans;
        } else {
            double ans = total - tDisc;
            cout << ans;
        } 
    } else 
        cout << total;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   