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

int fact(int n) {
    int sum = 1;
    for (int i = 1; i <= n; i++) {   
        sum *= i;
    }
    return sum;
}

void solve(){
    int t, n; cin >> t >> n;
    n++;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i+1; j++) {
            cout << " ";
        } 
        for (int j = 0; j < i+1; j++) {
            cout<<fact(i)/fact(j)*fact(i-j)<<" ";
        } 
        cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   