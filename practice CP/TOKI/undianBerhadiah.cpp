#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    int coupon,temp,closest = 10e7;
    int cnt=1;

    for (int i=0;i<n;++i) {
        cin >> coupon;
        closest = min(abs(x - coupon), closest);
    } 

    vector <int> v;
    for (int i=0;i<n;++i) if ()

    // for (int i=0;i<n;++i) {
    //     cin >> coupon;
    //     if (abs(coupon - x) < closest) {
    //     cnt = 1;
    //     temp = coupon;
    //     closest = abs(coupon - x);
    //     // cnt++;
    //     } else if (abs(coupon - x) == closest) {
    //         cnt++;
    //         temp = coupon;
    //     }
    // };
    
    // if (cnt == 1) {
    //     if (temp > x) {
    //         cout << x + closest;
    //     } else {
    //         cout << x - closest;
    //     }
    // } else if (cnt == 2) {
    //     cout << x - closest << endl;
    //     cout << x + closest << endl;
    // } 
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   