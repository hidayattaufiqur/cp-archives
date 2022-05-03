#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n, m; cin >> n >> m;
    int u_, v_;
    bool arr[n] = {false};
    int ans = 0;

    for (int i = 0; i < n; ++i) {
        cin >> u_ >> v_;
        if (!arr[u_-1] && !arr[v_-1]) {
            arr[u_-1] = true; arr[v_-1] = true;
            ans++;
        };
    };

    // for (int i = 0; i < n; ++i) {
    //     if (!u[i] && !v[i]) {
    //         ans++;
    //     }
    // }

    cout << ans << "\n";

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
