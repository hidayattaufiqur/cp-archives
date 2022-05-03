#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x, y;
    int alice, bob;
    vector <int> a;
    vector <int> b;
    
    for (int i = 0; i<2; i++) {
        cin >> x;
        a.push_back(x);
    }
    
    for (int i = 0; i<2; i++) {
        cin >> y;
        b.push_back(y);
    }
    // abs(a, b)
    for (int i = 0; i < 2; i++) {
        if (a[i] > b[i]) alice++;
        else if (a[i] < b[i]) bob++;
    }
    // vector<int> result({alice, bob});
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " " << b[i] << "\n"; 

    }
    cout << alice << " " << bob << "\n"; 
}


int main(){
    solve();
}