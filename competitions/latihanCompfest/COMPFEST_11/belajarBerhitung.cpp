#include <bits/stdc++.h>
#include <set>
#define ll long long

using namespace std;

struct s {
    ll left;
    ll right;
};

bool asc(s a, s b) {
    return a.left < b.left;
}

int main(){
    ll n; cin >> n;
    ll l, r, l_, r_ = 0;
    s arr[n];
    
    ll sum = 0;    
    ll total = 0;
    ll result = 0;

    for (ll i = 0; i < n; i++) {
        cin >> arr[i].left >> arr[i].right;
    };

    sort(arr, arr+n, asc);

    l_ = arr[0].left;
    r_ = arr[0].right;
    for (ll i = 1; i < n; i++) {
        // cin >> l >> r;
        if (arr[i].left > r_) {
            // sum += (arr[i].left + arr[i].right);
            // total += arr[i].right - arr[i].left + 1;
            result += ((r_ - l_ + 1)*(r_ + l_))/2;
            r_ = arr[i].right;
            l_ = arr[i].left;
            // arr[i].left = l;
            // arr[i].right = r;
        } else {
            // l_ = arr[0].left;
            r_ = max(arr[i].right, r_);
            // sum += (l_ + r_);
            // total += r_ - l_ + 1;
        }

        // if there's no llersect
        // cin >> arr[i].left >> arr[i].right;
        // sum += (arr[i].left + arr[i].right);
        // total += arr[i].right - arr[i].left + 1;
        // result += (total*sum)/2;
        // total = 0;
        // sum = 0;
    };
    result += ((r_ - l_ + 1)*(r_ + l_))/2;
    // result += ((r_ - l_ + 1)*(r_ + l_))/2;
    
  
    // sum = (total*sum)/2;

    cout << result << endl;

    return 0;

}