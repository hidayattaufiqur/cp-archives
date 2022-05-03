#include <iostream>
#include <deque> 
#include <bits/stdc++.h>
using namespace std;

void printKMax(int arr[], int n, int k){
    //Write your code here.
    deque <int> d;
    for (int i=0; i<k; ++i) {
        d.push_back(arr[i]);
    }
    int m = *max_element(d.begin(), d.end());
    cout << m << " ";
    for (int i=k;i<n;++i){
        d.pop_front();
        // if (arr[k+i] > )
        d.push_back(arr[i]);
        if (arr[i-k] == m || arr[i] >= m)
            m = *max_element(d.begin(), d.end());
        cout << m << " ";
    }
    cout << endl;
	// for (int i=0; i<=n-k;++i) {
	// 	int maks = 0;
	// 	for (int j=i;j<i+k;++j) {
	// 		if (arr[j] > maks) {
	// 			maks = arr[j];
	// 		}
	// 	}
    //     /*
    //         n = 5, k = 2
    //         3 4 6 3 4
            
    //         i = 2; m = 4
    //         2-2 = 0 -> 3; 6 true; false
    //         3-2 = 1 -> 4; 3 false; true
    //         4-2 = 2 -> 6; 4 true; false
    //     */
	// 	d.push_back(maks);
	// 	cout << d[0] << " ";
	// 	d.pop_back();
	// }
	// cout << endl;
}

int main(){
  
    int t;
    cin >> t;
    while(t>0) {
        int n,k;
        cin >> n >> k;
        int i;
        int arr[n];
        for(i=0;i<n;i++)
              cin >> arr[i];
        printKMax(arr, n, k);
        t--;
      }
      return 0;
}
