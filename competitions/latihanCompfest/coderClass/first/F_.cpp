#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    int result;
    int check1, check2, check3, check4, check5, check6;
    bool check = false;
    cin >> n >> m;

    // cout << 25230 % 10 << endl;
    // cout << 25230 % 100 / 10 << endl;
    // cout << 25230 % 1000 / 100 << endl;
    // cout << 25230 % 10000 / 1000 << endl;
    // cout << 25230 % 100000 / 10000 << endl;
    // cout << 999999 % 1000000 / 100000 << endl;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // int j = m;
    for (int j = m; j < 10e6; j+=m) {
        result = j;
        // cout << "check 1" << endl;
        for (int k = 0; k < n; k++) {
            // cout << "check 2" << endl;
            // cout << result % 10 << endl;
            check = result % 10 == a[k];
            cout << check << endl;
            while (check) {
                result /= 10;
                // cout << result << endl;
                if (result < 1) {
                    break;
                }
            } 
        }   
    }
    if (check)
    {
        cout << result;
    }
    else
    {
        cout << "-1";
    }
}
