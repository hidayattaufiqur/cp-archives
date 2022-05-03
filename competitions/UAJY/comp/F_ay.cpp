#include <bits/stdc++.h>
#define input cin
#define print cout
#define ll long long
#define gcn _getchar_nolock
#define gcu getchar_unlocked
#define pii pair<int, int>
#define pil pair<int, ll>
#define pll pair<ll, ll>
#define pib pair<int, bool>
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) a * b / __gcd(a, b)
#define sn(a, un) (un - a + 1) * (a + un) / 2
#define nc2(n) n * (n - 1) / 2

using namespace std;

int main() {
    // ios_base::sync_with_stdio(false); input.tie(NULL);

    int t;
    vector<int> v;
    v.push_back(0);
    while (cin >> t) {
        if (t == -1) break;
        v.push_back(t);
    }
    // for (auto it : v) {
    //     print << it << " ";
    // }
    int panjang = (int)v.size();
    for (int i = 8; i < panjang; i++) {
        double rata2 = 0;
        for (int j = i - 7; j <= (i - 1); j++) {
            rata2 += v[j];
        }
        rata2 /= (double)7;
        // print << rata2 << endl;
        double deviasi = 0;
        for (int j = i - 7; j <= (i - 1); j++) {
            deviasi += pow(v[j] - rata2, 2);
        }
        deviasi /= (double)(6);
        deviasi = sqrt(deviasi);
        // print << deviasi << endl;
        int kenaikan = (v[i] - v[i - 1]);
        if (kenaikan > deviasi && kenaikan >= 0) {
            cout << "up ";
        } else if (abs(kenaikan) > deviasi && kenaikan < 0) {
            cout << "down ";
        } else {
            cout << "flat ";
        }
    }

    return 0;
}