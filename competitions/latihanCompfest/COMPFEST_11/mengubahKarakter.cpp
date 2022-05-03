#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    map <char, ll> d;
    int n, m; cin >> n >> m;
    string s, b; cin >> s;
    char a;

    for (int i = 0; i < n; i++) {
        d[s[i]]++;
    }

    for (auto i : d) {
        // ans += i.second;
        cout << i.first << " " << i.second << endl;
    }

    for (int j = 0; j < m; j++) {
        cin >> a >> b;
        ll temp = d[a];
        d[a]=0;
        for (int k = 0; k < b.size(); k++) {
            d[b[k]]+=temp;
        }
    }

    ll ans = 0;

    for (auto i : d) {
        ans += i.second;
        // cout << i.first << " " << i.second << endl;
    }

    cout << ans << "\n";


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}