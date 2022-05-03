#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    int n; cin >> n;
    n = n*2;
    int i = 1;
    int j = 1;
    int mid = n/2;
    while (i < n) {
        if (i == mid) {
            j = 1;
            while (j < n) {
                cout << "x";
                j++;
            }
            cout << endl;
        } else {
            j = 1;
            while (j < n) {
                if (j == i || j == mid || j == n-i) {
                    cout << "x";
                } else {
                    cout << " ";
                }
                j++;
            }
            cout << endl;
        }
        i++;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   