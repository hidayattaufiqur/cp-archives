#include <iostream>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    if (0 <= n && n <= 100) {
        cout << "YA";
    } else {
        cout << "TIDAK";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   