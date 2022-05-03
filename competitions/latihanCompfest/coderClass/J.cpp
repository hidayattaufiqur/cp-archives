#include <iostream>

using namespace std;

int t, n, m;
long long hasil;
int arr[500];

void solve(int x, int depth)
{
    if (depth == m)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum += arr[i];
        }
        // cout << endl;
        if (sum == n)
        {
            hasil = (hasil + 1) % 1000000007;
        }
    }
    else
    {
        for (int i = 1; i < 10; i++)
        {
            arr[depth] = i;
            solve(x, depth + 1);
        }
    }
}

int main()
{
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        hasil = 0;
        solve(n, 0);
        cout << hasil << endl;
    }

    return 0;
}