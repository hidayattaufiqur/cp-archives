#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int h[n];
    int result = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    int idxLeast = 0;
    int idxMost = 0;
    
    for (int i = 0; i <n; i++) {
        int j = idxMost;
        for (j; j<n; j++) {
            if (h[i] < h[idxLeast]) {
                idxLeast = j;
            }
            if (h[i] > h[idxMost])
            {
                idxMost = j;
            }
        }
        cout << idxLeast << " " << idxMost << endl;
        result = h[idxMost] - h[idxLeast];
    }

    // for (int i = idxLeast; i<n;i++) {
    //     if (h[i] > h[idxMost])
    //     {
    //         idxMost = i;
    //     }
    //     result = h[idxMost] - h[idxLeast];
    // }

    // idxLeast = 0;
    // idxMost = 0; 
    
    // for (int i = idxMost+1; i < n; i++) {
    //     if (h[i] < h[idxLeast])
    //     {
    //         idxLeast = i;
    //     }
    //     if (h[i] > h[idxMost])
    //     {
    //         idxMost = i;
    //     }
    //     cout << idxMost << " " << idxLeast << endl;
    //     result = h[idxMost] - h[idxLeast];

    // }
    cout << result;

}