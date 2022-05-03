#include <iostream>

using namespace std;

int main()
{
    int t, n, l, temp, ntemp, pass;
    bool change = true;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> l >> n;
        ntemp = n;
        bool a[l] = {0};
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            a[temp - 1] = temp;
        }
        // for (int j = 0; j < l; j++){
        //     cout << a[j] << " ";
        // }
        // cout << endl;
        pass = 1;
        while (ntemp < l)
        {
            for (int j = 0; j < l; j++)
            {
                if (a[j] != 0 && change == true)
                {
                    if (pass % 2 != 0)
                    {
                        if (a[j - 1] == 0 && j != 0)
                        {
                            a[j - 1] = j;
                            ntemp++;
                        }
                    }
                    else
                    {
                        if (a[j - 1] == 0 && j != 0)
                        {
                            a[j - 1] = j;
                            ntemp++;
                        }
                        if (a[j + 1] == 0 && j < l - 1)
                        {
                            a[j + 1] = j + 2;
                            change = false;
                            ntemp++;
                        }
                    }
                }
                else
                {
                    change = true;
                }
            }
            pass++;
        }
        cout << pass - 1 << endl;
    }

    return 0;
}