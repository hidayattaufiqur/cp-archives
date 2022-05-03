#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    int p, q; cin >> p >> q;
    p *= p;
    q *= q;

    int total = p+q+1;

    if (total %4 != 0) {
        cout << -1;
    } else if (total % 4 == 0) {
        cout << total / 4;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   