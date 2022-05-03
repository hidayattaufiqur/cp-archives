#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector <int>
#define vc vector <char>
#define vl vector <ll>
#define vii vector <int,int>
#define vll vector <ll, ll>
#define mpi make_pair(int, int)
#define mpl make_pair(long, long)
#define lcm(a, b) a * b / gcd(a,b)
const int MOD = 1e9;
using namespace std;

vector <int> Sieve(vector <int> v, int n) {
    vi ans;
    for (int x = 2; x <= n; x++) {
        if (v[x]) {
            cout << v[x] << endl;
            ans.push_back(x);
            continue;
        }
        for (int u = 2*x; u <= n; u += x) {
            v[u] = x;
        }
    }
    return ans;
}

void solve(){
    int n, x; cin >> n;
    int maks = 77777;
    vi ans; 
    for (int i = 0; i < maks; i++) {
        ans.push_back(0);
    }
    ans = Sieve(ans, maks);
    for (int i = 0; i < n; i++) {
        cin >> x;
        // cout << ans[x-1]<< endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   