#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long n ,h,t;
    cin >> n;
    if (n% 3 == 0){
        h = n - n/3;
    }else {
        t=n;
        while(t%3!=0){
            t--;
        }
        h = t - t/3 + 1;
    }
    cout << h ;
    return 0;
}