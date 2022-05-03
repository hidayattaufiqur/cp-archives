#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

int zigZag(int arr[]) {
    
}

void solve(){
    int n; cin >> n;
    int arr[n+1];
    int total = 0;
    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    int arr2[total] = {0};

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= arr[i]; j++) {
            arr2[j] = i;
            cout << arr2[j] << " ";
        }
    }

    int zz = zigZag(arr2);

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   