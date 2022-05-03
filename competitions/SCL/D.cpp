#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    int t; cin >> t;
    int n; 

    int x; int cnt = 0;

    vector <int> v;

    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int j = 0; j < n*2; j++) {
            cin >> x; 
            v.push_back(x);
        }

        for (int j = 0; j < n*2; j++) {
            if (v[j] == v[n*2-j-1]) cnt++;
        }

        v.clear();
    }

    cout << cnt;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   