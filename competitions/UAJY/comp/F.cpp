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
    int x; 
    vi v;
    int sum, i = 0;
    double mean = 0;
    sum = 0;
    while (cin >> x) {
        if (x == -1) break;
        v.push_back(x);
        i++;
    }
    // for (int j = i-1; j >= i-8; j--) {
    // }
    for (int j = i-8; j < i; j++) {
        sum = 0;
        for (int k = i-1; k >= i-1-7; k--) {
            sum += v[k];
        }
        mean = (double)sum/7.0;
        sum += pow(v[j] - mean, 2);
        double sd = sqrt(sum/7-1);
        // cout << sd << endl;
        if ((v[j] - v[j-1]) > sd )
            cout << "up ";
        else if ((v[j] - v[j-1]) < (-1*sd))
            cout << "down ";
        else cout << "flat ";
    }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   