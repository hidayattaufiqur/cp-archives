#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    string s; cin >> s;
    int n; cin >> n;
    string arr[n];
    string x;
    ll check= 0, count = 0, total = 0;
    for (int i = 0; i < s.size(); i++) {
        total += s[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        x = arr[i];
        for (int j = 0; j < s.size(); j++) {
            check += x[j];
        }
        if (total != check) {
            cout << "ini: " << arr[i] << endl;
            count++;
        }
        check = 0;
    }
    cout << count;
}   

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   