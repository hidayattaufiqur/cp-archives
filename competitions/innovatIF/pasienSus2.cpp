#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

vector<int> convert(vector<string> v) {
    vector <int> vN;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            vN[i] = v[i][j];
        }
    }
    sort(vN.begin(), vN.end());
    return vN;
}

void solve(){
    string s; cin >> s;
    int n; cin >> n;
    vector <int> vS, v;
    vS = convert(vS);
    for (int i = 0; i < n; i++) {
        
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   