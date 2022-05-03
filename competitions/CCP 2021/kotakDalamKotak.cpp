#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    ll luas; cin >> luas;
    ll p, l;
    ll least = MOD;
    // p = luas/l
    // l = luas/p
    if (sqrt(luas) != 0 && pow(sqrt(luas),2) == luas) {
        p = sqrt(luas);
        l = sqrt(luas);
    }  else {
        for (int i = 1; i < luas/2; i++) {
            if (luas / i == i) {
                p = i;
                l = luas/i;
            } else {
                if (min(abs(i-luas/i), least) < least) {
                    p = i;
                    l = luas / i;
                    least = min(abs(i-(luas/i)), least);
                }
            }
        }
    }
    //     p = luas/i;
    //     l = luas/p;
    //     if (luas == (p * l)) {
    cout << p << " " << l << endl;
    //     }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   