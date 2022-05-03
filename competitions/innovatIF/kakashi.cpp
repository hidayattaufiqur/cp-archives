#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    ll n, p; cin >> n >> p;
    ll count = 0;
    if (abs(n - p) < abs(1 - p)) {
        for (ll i = n; i >= 1; i-=2) {
            if (i % 2 == 0) {
                if (i == p || i+1 == p) {
                    break;
                } else {
                    count++;
                }
            } else {
                if (i == p || i - 1 == p) {
                    break;
                } else {
                    count++;
                }
            }
        }
    } else {
        for (ll i = 1; i <= n; i+=2) {
            if (i % 2 == 0) {
                if (i == p || i+1 == p) {
                    break;
                } else {
                    count++;
                }
            } else {
                if (i == p || i - 1 == p) {
                    break;
                } else {
                    count++;
                }
            }
        }
    }
    cout << count;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   