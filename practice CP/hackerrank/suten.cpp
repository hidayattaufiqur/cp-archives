#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    int n; 
    int scrE, scrG;
    vector<char> e, g;
    char a, b;
    while (cin >> n) {
        cin >> a;
        e.push_back(a);
    }
    while (cin >> n) {
        cin >> b;
        g.push_back(b);
    }
    // for (int i = 0; i < n; i++) {
    // }
    for (int i = 0; i < n; i++) {
        if (e[i] == 'e' && g[i] == 'h') scrE++;
        if (e[i] == 'e' && g[i] == 'a') scrG++;
        if (e[i] == 'h' && g[i] == 'e') scrG++;
        if (e[i] == 'h' && g[i] == 'a') scrE++;
        if (g[i] == 'e' && g[i] == 'h') scrE++;
        if (g[i] == 'h' && e[i] == 'e') scrG++;
        if (g[i] == 'h' && e[i] == 'a') scrE++;
        if (g[i] == 'e' && e[i] == 'a') scrG++;
        // if (e[i] == 'a' && g[i] == 'h') scrG++;
        // if (e[i] == 'a' && g[i] == 'e') scrG++;
    }
    if (scrE > scrG) cout << "Eko wins";
    else if (scrE < scrG) cout << "Ganesh wins";
    else cout << "Draw";

}

int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    solve();

    return 0;
}   