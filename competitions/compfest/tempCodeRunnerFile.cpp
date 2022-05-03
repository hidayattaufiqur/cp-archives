#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n, m; cin >> n >> m;
    ll a[n];
    ll b[n];
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; ++i) {
        cin >> b[i];
    }


    ll maxx = 0;
    // int k = 0;
    for (ll i = 0; i < m+1; ++i) {
        ll temp = 0;
        for (ll j = 0; j < n; ++j) {
            temp += (((a[j]+i)%m)*b[j]);
            // cout << ((a[j]+i)%m) << " " << temp << " " << i << endl;
        }
        cout << temp << " " << i << endl;
        maxx = max(maxx, temp);
        // k++;
    }   

    cout << maxx;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   
