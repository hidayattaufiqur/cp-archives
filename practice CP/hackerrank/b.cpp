#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9+7;
using namespace std;

void solve(){
  ll a, b; cin >> a >> b;
  ll total = 0;
  for (int i = a; i <= b; i++){
    total += i;
  }
  cout << total % MOD; 
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   