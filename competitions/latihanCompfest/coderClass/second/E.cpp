#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    string temp;

    for (int i = 0; i < t; i++)
    {
        cin >> temp;
        int size = temp.length();
        int min = temp[0];
        cout << min << endl;
        for (int j = 1; j < size; j++)
        {
            if (temp[j] > min)
            {
                min = temp[j];
            }
        }
        if (min <= '9')
        {
            min -= 47;
        }
        else if (min <= 'Z')
        {
            min -= (47 + 7);
        }
        else if (min <= 'z')
        {
            min -= (47 + 7 + 6);
        }
        cout << min << " " << 62 << endl;
    }

    return 0;
}