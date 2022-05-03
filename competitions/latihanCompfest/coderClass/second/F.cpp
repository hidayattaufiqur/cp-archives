#include <bits/stdc++.h>

using namespace std;

int main(){
    int T, N, M;
    double result;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N >> M;
    }

    double A_1 = double(N) - double(M) - double(1);
    double A_i = double(N - A_1) / double(M - 1.0)  ;  

    for (int i = 0; i < M-1; i++) {
        if (N == M) {
            result += double(N/M);
        } else if (N > M) {
            if (i == 0) {
                result = 1.0 / A_1;
            }
            cout << result << endl;
            result += 1.0 / (double(N - A_1) / double(M - 1));
            // cout << setprecision(9) << double(N - A_1) / double(M - 1) << " " << A_i << " " << result << endl;
        } else { 
            if (i == 0) {
                result = 1.0 / double(M - N);
            }
            cout << result << endl;
            result += 1.0 / (double(N - (M - N))) / double(M - 1);
            cout << 1.0 / ((double(N - (M - N))) / double(M - 1)) << "here" << endl;
        }
    }

    cout << setprecision(9) << result << endl;



}