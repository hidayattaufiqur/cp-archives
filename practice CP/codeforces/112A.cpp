#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    string a,b;
    cin >> a >> b;

    bool oof = true;
    int cntA = 0;
    int cntB = 0;

    for (int i = 0; i < a.size(); i++) {
        cntA+=tolower(a[i]);
        cntB+=tolower(b[i]);

        if (tolower(a[i]) != tolower(b[i])) oof = false;
        if (!oof) break;
        // cout << cntA << " " << cntB << endl;
    }

    if(oof) {
        cout << 0;
    } else {
        if (cntA >= cntB) cout << 1;
        if (cntA < cntB) cout << -1;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   