#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    ll n;
    cin >> n;
    ll n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
    while (n > 0) {
        if (n - 100 >= 0) {
            n-=100;
            n100++;   
        } else if (n - 50 >= 0) {
            n -= 50;
            n50++;
        } else if (n - 20 >= 0) {
            n -= 20;
            n20++;
        } else if (n - 10 >= 0) {
            n -= 10;
            n10++;
        } else if (n - 5 >= 0) {
            n -= 5;
            n5++;
        } else if (n - 2 >= 0) {
            n -= 2;
            n2++;
        } else if (n - 1 >= 0) {
            n -= 1;
            n1++;
        }
    }
    cout << n100 << " " << n50 << " " << n20 << " " << n10 << " " << n5 << " " << n2 << " " << n1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   