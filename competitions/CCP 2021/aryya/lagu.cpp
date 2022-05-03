#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int convert(string x) {
    int jam = stoi(x.substr(0, 2)) * 3600;
    int menit = stoi(x.substr(3, 2)) * 60;
    int detik = stoi(x.substr(6, 2));
    return jam + menit + detik;
}

int main() {
    int n;
    string durasi, lagu;
    cin >> n >> durasi >> lagu;

    int durasiC = convert(durasi);
    int laguC = convert(lagu);
    // cout << laguC << endl;
    
    // int i = 1;
    // string str;
    // while (i <= n) {
    //     getline(cin, str);
    //     // if (i != 0) {
    //     // }
    //     cout << str << endl;
    //     i++;
    // }

    string arr[n];
    int i = 0, j = 0, laguNow;
    string temp, ans = "";
    getline(cin, temp);
    while (i < n) {
        getline(cin, temp);
        // if (j != 0) {
        int idx = temp.find("-");
        // cout << idx << endl;
        arr[i] = temp.substr(0, idx - 1);
        lagu = temp.substr(idx + 2, 8);
        laguNow = convert(lagu);
        // cout << lagu << " " << laguNow << endl;
        if (ans == "") {
            if (laguC < laguNow) {
                ans = arr[i - 1];
            } else if (laguC == laguNow) {
                ans = arr[i];
            }
        }
        i++;
        // }
        // j++;
    }
    if (ans == "") {
        cout << arr[i - 1];
    } else {
        cout << ans;
    }

    // i = 0;
    // cout << endl;
    // while (i < n) {
    //     cout << arr[i] << endl;
    //     i++;
    // }

    return 0;
}