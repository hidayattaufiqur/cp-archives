#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a%b);
    }
}

void solve(){
    int t; cin >> t;
    int p, l;
    int fpb;
    for (int i = 0; i < t; i++) {
        cin >> p >> l;
        fpb = gcd(p,l);
        fpb = fpb*fpb;
        if (p == l || fpb == 1) cout << 1 << "\n";
        else {
            cout << p*l/fpb;
        }
    }
    

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   