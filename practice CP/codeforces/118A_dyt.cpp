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

void solve(){
    string s; cin >> s;
    string vowels = "abcdeABCDE";
    stringstream ss;
    for (int i = 0; i < s.length(); i++) {
        if (vowels.find(s[i]) == -1) {
            ans.append(s[i]);
        }
    }
    cout << ss;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   