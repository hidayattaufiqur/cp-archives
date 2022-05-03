#include <bits/stdc++.h>
#define ll long long 
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    int k; cin >> k;
    bool chk = false;
    ll n; 
    ll a;
    ll b;
    for (int i = 0; i < k; i++) {
        cin >> n;
        a = 2;
        b = 3;
        for (int j = 1; j < n/2; j++) {
            if (a*b/2 == n) {
                chk = true;
                break;
            } else {
                chk = false;
                a++;
                b++;
            }
        }
        if (chk || n == 3) cout << "sempoerna" << endl;
        else cout << "silap" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   