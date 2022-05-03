#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    int n; cin >> n;
    int arr[n];
    int best = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    best = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < best) cnt++;
        if (arr[i] >= best) best = arr[i];
    }
    cout << cnt;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   