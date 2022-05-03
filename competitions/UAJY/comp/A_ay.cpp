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

void precomputeCombination(int n, vector<vector<int>> &v) {
    for (int i = 0; i <= n; i++) {
        v[i][0] = 1;
        for (int j = 1; j < i; j++) {
            v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
        }
        v[i][i] = 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false); input.tie(NULL);

    int mulai, banyaknya;
    input >> mulai >> banyaknya;
    vector<vector<int>> v(banyaknya + 1, vector<int>(banyaknya + 1, 0));
    precomputeCombination(banyaknya, v);
    for (int i = 0; i < mulai; i++) {
        print << "\n";
    }
    for (int i = mulai; i <= banyaknya; i++) {
        for (int j = 0; j < banyaknya - i; j++) {
            print << " ";
        }
        for (int j = 0; j < (i + 1); j++) {
            print << v[i][j] << " ";
        }
        print << "\n";
    }

    return 0;
}