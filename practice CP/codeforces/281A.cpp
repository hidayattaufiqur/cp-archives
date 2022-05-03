#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    string s; cin >> s;

    if (65 <= s[0] <= 90) {
        cout << s[0];
    } else {
        for (auto& c: s) {
            if (c == s[0]) cout << toupper(c);
            else cout << s;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   