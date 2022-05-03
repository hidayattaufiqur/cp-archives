#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

bool comp(int a, int b) {
    return a > b;
}

void solve(){
  int t, n, a; cin >> t;  
  vector<int> v;
  for (int i = 0; i < t; i++) {
      cin >> n;
      for (int j = 0; j < n; j++) {
          cin >> a;
          v.push_back(a);
      }
    sort(v.begin(), v.end(), comp);

    for (auto x : v) {
        if (x % 2 == 0) {
            cout << x << " ";
        }
    }

    for (auto x : v) {
        if (x % 2 != 0) {
            cout << x << " ";
        }
    v.clear();

  }
    cout << "\n";

  }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   