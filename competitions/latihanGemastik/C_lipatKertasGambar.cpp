#include <iostream>
#include <cstdio>

using namespace std;

struct data {
    int p;
    int q;
    int m;
};

int main() {
    int n;
    cin >> n;
    data tabData[n];
    for (int i = 0; i < n; i++) {
        cin >> tabData[i].p >> tabData[i].q >> tabData[i].m;
        while ((tabData[i].p > 0 || tabData[i].q > 0) && tabData[i].m > 0) {
            // if (tabData[i].p % 2 != 0 || tabData[i].q % 2 != 0) {
            // }
            if (tabData[i].p >= tabData[i].q) {
                tabData[i].p = tabData[i].p / 2;
                tabData[i].m -= 1;
            } else if (tabData[i].p <= tabData[i].q) {
                tabData[i].q = tabData[i].q / 2;
                tabData[i].m -= 1;
            };

        };
    };


    for (int i = 0; i < n; i++) {
        if (tabData[i].p > tabData[i].q) {
            cout << tabData[i].p << " " << tabData[i].q << "\n";      
        } else {
            cout << tabData[i].q << " " << tabData[i].p << "\n";      
        };
    };
}