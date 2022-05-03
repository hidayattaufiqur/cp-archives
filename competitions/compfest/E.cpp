#include <bits/stdc++.h>
#define ll long long
// #define foro(i, n) for (int i = 0, i < n; ++i)
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i+=2) {
        int temp = 0;
        // int min1 = 0;
        int a1 = (arr[i] - arr[i+1]);
        int a2 = (arr[i+1] - arr[i]);
        int a3 = (arr[i] - arr[i+2]);
        int a4 = (arr[i+2] - arr[i]);
        if (a1 - ((a1/m) * m) < a2 - ((a2/m) * m) &&  a1 - ((a1/m) * m) > 0) {
            
        }
        }

    }


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   
