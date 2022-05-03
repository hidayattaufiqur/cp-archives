#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    ll n, x; cin >> n;
    set<ll> v;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.insert(x);
    }
    // sort(v.begin(), v.end());
    // if cout << "sasageo";
    // else cout << v[2];
    ll a, b = -1, i = 0;
    for (auto d : v) { // 3 4 5 6 8; a = 4, b = 5
        // cout << d << endl;
        if (v.size() >= 3)  {
            if (i == 2) b = d;
        }
        if (i == 1) a = d;
        i++;
    } 
    // cout << a << " " << b;
    if (a == b || b == -1) cout << "sasageo";
    else cout << b;
}   

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   