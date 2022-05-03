#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    string s; 
    cin >> s;

    vector <int> v;

    for (int i = 0 ; i < s.size(); ++i) {
        if(s[i] != '+') {
            v.push_back(s[i]);
        }
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i]-'0';
        if (i != v.size()-1) cout << "+";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   