#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a%b);
    }
}

void solve(){
    ll a,b,c,d; cin >> a >> b >> c >> d;
    ll pembilang = 0;
    ll penyebut = 0;
    ll fpb;
    char p; cin >> p;
    if (p == '+') {
        penyebut = b*d;
        pembilang = (penyebut / b * a) + (penyebut / d * c);
        fpb = gcd(pembilang, penyebut);
        if (penyebut < 0 || pembilang < 0) {
            cout << abs(pembilang/fpb)*-1 << " " << abs(penyebut/fpb);
        } else {
            cout << pembilang/fpb << " " << penyebut/fpb;
        }
    } else if (p == '-') {
        penyebut = b*d;
        pembilang = (penyebut / b * a) - (penyebut / d * c);
        fpb = gcd(pembilang, penyebut);
       if (penyebut < 0 || pembilang < 0) {
            cout << abs(pembilang/fpb)*-1 << " " << abs(penyebut/fpb);
        } else {
            cout << pembilang/fpb << " " << penyebut/fpb;
        }
    } else if (p == '*') {
        penyebut = b*d;
        pembilang = (a * c);
        fpb = gcd(pembilang, penyebut);
        if (penyebut < 0 || pembilang < 0) {
            cout << abs(pembilang/fpb)*-1 << " " << abs(penyebut/fpb);
        } else {
            cout << pembilang/fpb << " " << penyebut/fpb;
        }
    } if (p == '/') {
        penyebut = b*c;
        pembilang = a * d;
        fpb = gcd(pembilang, penyebut);
        if (penyebut < 0 || pembilang < 0) {
            cout << abs(pembilang/fpb)*-1 << " " << abs(penyebut/fpb);
        } else {
            cout << pembilang/fpb << " " << penyebut/fpb;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   