#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr1[100001] = {0};
    int arr2[100001] = {0};
    int temp;
    int maks = 0;
    while (n > 0) {
        cin >> temp;
        maks = max(maks, temp);
        arr1[temp]++;
        n--;
    }
    while (m > 0) {
        cin >> temp;
        maks = max(maks, temp);
        arr2[temp]++;
        m--;
    }
    int i = 1;
    int ans = 0;
    while (i <= maks) {
        if (arr1[i] != 0 && arr2[i] == 0) {
            ans += arr1[i];
        } else if (arr1[i] == 0 && arr2[i] != 0) {
            ans += arr2[i];
        }
        i++;
    }
    cout << ans;

    return 0;
}