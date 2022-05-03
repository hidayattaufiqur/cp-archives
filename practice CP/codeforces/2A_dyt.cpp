#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    int n; cin >> n;
    string name;
    int score, maxScore = 0;
    string winner;

    vector<pair<string, int>> v;

    bool flag = false;
    for (int i = 0; i < n; i++) {
        cin >> name >> score;
        for (auto &x : v) {
            if (x.first == name) {
                x.second = x.second + score;
                flag = true;
            }
            if (x.second > maxScore) {
                winner = x.first;
                maxScore = x.second;
            }
        }
        if (!flag) v.push_back(make_pair(name, score));
        flag = false;
    }

    cout << endl;

    for (auto x : v) {
        cout << x.first << " " << x.second << " " << endl;
    }   

    cout << winner;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   