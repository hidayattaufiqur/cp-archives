#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    int arr[5][5];
    int locI, locJ;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                locI = i;
                locJ = j;
            }
        }
    }
    int mv = 0;
    while(locI != 2 || locJ != 2) {
        if (locI > 2) {
            locI--;
            mv++;
        } else if (locI < 2) {
            locI++;
            mv++;
        }
        if (locJ > 2) {
            locJ--;
            mv++;
        } else if (locJ < 2) {
            locJ++;
            mv++;
        }
        // cout << locI << " " << locJ << "number of moves: " << mv << endl; 
    }
    if(locI == 2 && locJ == 2) cout << mv;
    else cout << mv+1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   