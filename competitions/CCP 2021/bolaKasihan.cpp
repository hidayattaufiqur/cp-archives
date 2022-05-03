#include <bits/stdc++.h>

#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    int n, m, x; cin >> n >> m;
    int arr1[n] = {0}; int arr2[m] = {0};
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr1[x]++;
    }
    for (int i = 0; i < m; i++) {
        cin >> x;
        arr2[x]++;
    }
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   