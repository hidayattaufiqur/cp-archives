#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    int a, b; cin >> a >> b;
    int p, j;
    int arr[b];
    for (int i = a; i <= b; i++) {
        arr[i] = i;
    }
    for (int i = a; i <= floor(sqrt(b)); i++) {
        if (arr[i] != 0) {
            j = i*i;
        } 
        while (j <= b) {
            arr[j] = 0;
            j = j + i;
        }
    }
    int i = 0;
    int L[b];
    for (int p = a; p <= b; p++) {
        if (arr[p] != 0) {
            L[i] = arr[p];
            i++;
        } else {
            L[i] = 0;
        }
    }
    int maks = 0;
    int idL = 0;
    int idR = 0;
    int chk = 0;
    i = 0;
    while (chk < b) {
        if (max(abs(L[i]-L[i+1]), maks) > maks && L[i] != 0 && L[i+1] != 0) {
            maks = max(abs(L[i]-L[i+1]), maks);
            idL = i;
            idR = i+1;
        }
        i++;
        chk+=arr[i];
    }
    cout << L[idL] << L[idR];
    
}

int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    solve();

    return 0;
}   