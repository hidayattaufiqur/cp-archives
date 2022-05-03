#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    int n; cin >> n;
    vector <string> v;
    string s;
    fflush(cin);
    for (int i = 0; i <= n; i++) {
        getline(cin, s);
        v.push_back(s);
    }
    for (auto x: v) {
        cout << x << " " << x.size() << endl;
    }
}

int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    solve();

    return 0;
}   