#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, n2;
    cin >> n >> n2;
    int x[n];
    int min;
    for (int i = 0; i<n;i++) {
        cin >> x[i];
        min = abs(n2-x[i]);
        cout << min << endl;
        if (abs(x[i] - n2) < min)  {
            min = abs(n2 - x[i]);
        }  
    }   

    cout << min;

    for (int i=0;i<n;i++) {
        if (n2 == (x[i] - min))
        {
            cout << "here" << x[i] << endl;
        }
        if (n2 == (x[i] + min)) {
            cout << "here then" << x[i] << endl;
        }
    }

}