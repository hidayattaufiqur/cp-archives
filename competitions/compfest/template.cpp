#include <bits/stdc++.h>
using namespace std;


int fpb(int m, int n){
    int r;
    r = m % n;
    while(r != 0){
        m = n;
        n = r;
        r = m % n;
    }
    return n;
}

int main (){
    int n,ans,input;
    ans = 0;
    cin >> n;
    int h[n];
    vector <int> h1;
    vector <int> h0;
    vector <int>::iterator ith0;
    vector <int>::iterator ith1;

    for (int i = 0 ; i < n ; i++){
        cin >> h[i] ;
    }
    for (int i = 0 ; i < n ; i++){
        cin >> input;
        if ( h[i] == 1){
            h1.push_back(input);
        } else {
            h0.push_back(input);
        }
    }
    // for (auto i : h0) {
    //     cout << i << " ";
    // }
    // cout << endl;
    // for (auto i : h1){
    //     cout << i << " ";
    // }
    // cout << endl;
    // cout << "ans:" << ans << endl;
    int temp= 0;
    for (auto ith0 = h0.begin(); ith0 != h0.end(); ++ith0){
        for (auto ith1 = h1.begin(); ith1 != h1.end(); ++ith1){
            cout << "h0 :" << *ith0 << " h1:"<< *ith1 << " ans:" << ans << endl; 
            if (fpb(*ith0, *ith1) !=1 ){
                h1.erase(ith1);
                ans+=1;
            }
                temp = ans;
        cout << "temp:" << temp << endl;
        }
    }
    
    return 0;
} 
