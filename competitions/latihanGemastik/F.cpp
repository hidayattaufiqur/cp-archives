#include <iostream> 
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    if (n > m) {
        cout << n+1;
    } else {
        cout << m+1;
    }
}