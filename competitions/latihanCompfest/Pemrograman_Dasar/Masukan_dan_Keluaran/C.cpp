#include <iostream>
#include <iomanip> // for std::setprecision()
// #include <cstdio>
using namespace std;

int main(){
    long double a,b,c,d,e,f,result;
    cin >> a >> b >> c >> d >> e >> f;
    result = a + b + c + d + e + f;
    cout << setprecision(11);
    cout << result / 6.0;
}