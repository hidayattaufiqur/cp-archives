#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> v;
    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }
    for (auto d : v){
        if (d % 3 == 0 && d % 5 == 0) cout << "HEYAHOOO ";
        else if (d % 5 == 0) cout << "HOOO ";
        else if (d % 3 == 0) cout << "HEYA ";
        else cout << d << " ";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   