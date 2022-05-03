#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int arr[n*2];
    bool diff = true;

    for (int i=0;i<n*2;i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n*2, greater<int>());

    for (int i=0;i<n*2;i+=2) {
        diff = abs(arr[i+1] - arr[i]) <= k;
        if (!diff) {
            break;
        }
    }
    
    if (diff) {
        printf("%s", "Ya");
    } else {
        printf("%s", "Tidak");
    }

    return 0;

}
