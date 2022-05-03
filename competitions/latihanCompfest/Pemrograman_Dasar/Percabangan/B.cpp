#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int x;
    scanf("%d", &x);

    if (x > 0 && x <= 1000) {
        cout << "bulangan bulat positif";
    } else if (x < 0) {
        cout << "bilangan bulat negatif";
    } else if (x == 0) {
        cout << "nol";
    } else {
        cout << "kata";
    }
}