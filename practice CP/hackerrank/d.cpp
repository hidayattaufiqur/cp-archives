#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    ld x, y;
    ll n, p;
    ld total;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y >> p;
        total = x + y;
        // printf("%.%dLe", x + y);
        cout << fixed << setprecision(p) << total << "\n";
        // cout << total;
    }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   