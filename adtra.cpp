#include <bits/stdc++.h>
using namespace std;
 
long long square(long double n,long double m,long double a) {
    float resx, resy;
    resx = ceil(n/a);
    resy = ceil(m/a);
    return resx*resy;   
}
 
int main(){
    long int n,m,a;
    cin >>n>>m>>a;
    cout << square(n,m,a);
    return 0;
}