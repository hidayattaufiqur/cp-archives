#include <bits/stdc++.h>
#define ll long long
#define ld long double
const ll MOD = 1e9;
using namespace std;

void solve(){
    ll q, l; cin >> q >> l;
    ll arr1[q];
    ll arr2[l*2];
    ll temp = 0;
    ll total = 0;
    for (ll i = 1; i <= q; i++) {
        cin >> arr1[i];
        total += arr1[i];
    }
    ll a, b;
    for (ll i = 0; i < l; i++) {
        cin >> a >> b;
        
    }
    // for (ll i = 0; i < l*2; i+=2) {

    // }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   