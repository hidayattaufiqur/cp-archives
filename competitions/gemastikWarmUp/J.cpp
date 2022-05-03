#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int nmax = 100000;

struct input {
    int value, index;
};

void sortByValue(input p[nmax], int n) {
    input temp[n];
    for (int i = 0; i < n; i++)  {
        for (int j = i + 1; j < n; j++)  {
        if (p[i].value > p[j].value) {
            temp[0] = p[i];
            p[i] = p[j];
            p[j] = temp[0];
        };
    };
    };
}


void sortByIndex(input p[nmax], int n) {
    input temp[n];
    for (int i = 0; i < n; i++)  {
        for (int j = i + 1; j < n; j++)  {
        if (p[i].index > p[j].index) {
            temp[0] = p[i];
            p[i] = p[j];
            p[j] = temp[0];
        };
    };
    };
}

int main() {
    int n, temp;      
    cin >> n;
    input p[n];

    for (int i = 0; i < n; i++) {
        cin >> p[i].value;
        p[i].index = i;
    };

    sortByValue(p, n);  

    int j = n; 

    for (int i = 0; i < n/2; i++) {
        temp = p[i].index; 
        p[i].index = p[j-1].index; 
        p[j-1].index = temp;
        j--;
    }

    sortByIndex(p, n);

    for (int i = 0; i < n; i++) {
        cout << p[i].value << " ";
    }

}