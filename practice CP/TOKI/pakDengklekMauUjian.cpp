#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if ((0 <= n) && (n <= 100)) {
        cout << "YA";
    } else {
        cout << "TIDAK";
    }
    return 0;

}