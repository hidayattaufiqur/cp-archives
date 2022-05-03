#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    int n,m; cin >> n >> m;
    int matrix[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // int b = 0;
    // int w = 0;
    // bool bflag = false;
    // bool wflag = false;
    // for (int i = 0; i < n; i++) {
    //     if (i % 2 == 0) { // if row is even *considering it's 0-based index
    //         for (int j = 0; j < m; j+=2) { // sum each black cell 
    //             b+=matrix[i][j];   
    //             if (matrix[i][j] == -1) bflag = true;
    //         }

    //         for (int j = 1; j < m; j+=2) { // sum each white cell 
    //             w+=matrix[i][j];   
    //             if (matrix[i][j] == -1) wflag = true;
    //         }
    //     } else if (i%2 != 0) { // if row is odd
    //         for (int j = 0; j < m; j+=2) { // sum each white cell 
    //             w+=matrix[i][j];   
    //             if (matrix[i][j] == -1) wflag = true;
    //         }
    //         for (int j = 1; j < m; j+=2) { // sum each black cell 
    //             b+=matrix[i][j];   
    //             if (matrix[i][j] == -1) bflag = true;
    //         }
    //     }
    // }

    // if (b == w && b != 0) cout << "NO";
    // else {
    //     if (b + w == 0){
    //         cout << "YES\n" << 0;
    //     } else if (bflag) {
    //         int diff = b - w;
    //         cout << "YES\n" << -1 - diff;
    //     } else if (wflag) {
    //         int diff = w - b;
    //         cout << "YES\n" << -1 - diff;
    //     }
    // }



    int p;
    int b, w;
    b = 0;
    w = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m-1; j++) {
            if (matrix[i][j] != 0) {
                int temp = j+1;

                if (i % 2 == 0) {
                    if (j % 2 == 0) {
                        b+=matrix[i][j];
                        w+=-1*matrix[i][j];
                    } else {
                        w+=matrix[i][j];
                        b+=-1*matrix[i][j];
                    }
                } else {
                    if (j % 2 == 0) {
                        w+=matrix[i][j];
                        b+=-1*matrix[i][j];
                    } else {
                        b+=matrix[i][j];
                        w+=-1*matrix[i][j];
                    }
                }

                matrix[i][j] += -1*matrix[i][j];
                // if (matrix[i++][j] != 0) {
                
                matrix[i][temp] += -1*matrix[i][temp];

                // if (matrix[i][j] == -1) p = 

                // } 
                // if (matrix[i][j++] != 0) {
                    // matrix[i][j++] += -1*matrix[i][j++];
                } 
                cout << matrix[i][j] << "  ";
            }
                cout << endl;
        }
        cout << b << " " << w << endl;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // cout << matrix[i][j] << " " ;
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