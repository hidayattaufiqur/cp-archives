#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    int least, most;
    int result = 0;
    int i = 0;


    for(int i=0;i<n;i++) {
        cin >> h[i];
    }

    least = min(h[0], h[1]);
    int idxLeast = 0;
    most = max(h[idxLeast], h[idxLeast+1]);
    int idxMost = 0;


    // for (i = 0; i<n-1;i++) {
    //     if (min(h[i], h[i+1]) <= least) {
    //         least = min(h[i], h[i+1]);
    //         idxLeast = i;
    //     }
    //     if (max(h[i], h[i+1]) >= most)
    //     {
    //         most = max(h[i], h[i+1]);
    //         idxMost = i;
    //     }
    //     cout << least << " " << most << endl;
    // }


    while (i<n-1) {
        if (min(h[i], h[i + 1]) <= least)
        {
            least = min(h[i], h[i + 1]);
            idxLeast = i;
        }
        if (max(h[i], h[i + 1]) >= most)
        {
            most = max(h[i], h[i + 1]);
            idxMost = i;
            result = h[idxMost] - h[idxLeast];
        }
        if (result == 0) {
            i++;
        } else {
            i = idxMost+1; 
        }
    }
        cout << result << endl;
        cout << idxLeast << " " << i << " " << idxMost << endl;




    // for (int i = idxLeast; i < n; i++) {
    //     if (min(h[i], h[i] + 1) <= least)
    //     {
    //         least = min(h[i], h[i] + 1);
    //         idxLeast = i;
    //     }
    //     for (int j = idxLeast; j < n; i++) {
    //         if (max(h[i], h[i] + 1) >= most)
    //         {
    //             most = max(h[i], h[i] + 1);
    //             idxMost = i;
    //         }
    //     }
    //     result += h[idxMost] - h[idxLeast];
    //     i = idxMost+1;
    //     }
     cout << result;
    }
