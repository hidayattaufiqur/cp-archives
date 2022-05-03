#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    int result;
    int check1, check2, check3, check4, check5, check6;
    bool check = false;
    cin >> n >> m;

    // cout << 25230 % 10 << endl;
    // cout << 25230 % 100 / 10 << endl;
    // cout << 25230 % 1000 / 100 << endl;
    // cout << 25230 % 10000 / 1000 << endl;
    // cout << 25230 % 100000 / 10000 << endl;
    // cout << 999999 % 1000000 / 100000 << endl;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int j = m; j <= 1000000; j += m) {
            if (to_string(j).length() == 1) {
                check1 = m % 10;
                for (int k = 0; k < n; k++) {
                    if (check1 == a[k])
                    {
                        check = true;
                        result = j;
                        break;
                    }
                    else
                    {
                        check = false;
                    }
                }
            }

            else if (to_string(j).length() == 2)
            {
                check1 = m % 10;
                check2 = m % 100 / 10;
                for (int k = 0; k < n; k++) {
                    if (check1 == a[k] || check2 == a[k]) {
                        if (check2 == a[k] || check1 == a[k]) {
                            check = true;
                            result = j;
                            cout << result << endl;
                            break;
                        }
                    } else {
                        check = false;
                    }
                }
            }
            else if (to_string(j).length() == 3)
            {
                check1 = m % 10;
                check2 = m % 100 / 10;
                check3 = m % 1000 / 100;
                for (int k = 0; k < n; k++)
                {
                    if (check1 == a[k] || check2 == a[k] || check3 == a[k])
                    {
                        if (check3 == a[k] || check2 == a[k] || check1 == a[k])
                        {
                            if (check3 == a[k] || check2 == a[k] || check1 == a[k]){
                            check = true;
                            result = j;
                            cout << result << endl;
                            break;
                            }
                            
                        }
                    }
                    else
                    {
                        check = false;
                    }
                }
            }
            else if (to_string(j).length() == 4)
            {
                check1 = m % 10;
                check2 = m % 100 / 10;
                check3 = m % 1000 / 100;
                check4 = m % 10000 / 1000;
                for (int k = 0; k < n; k++)
                {
                    if (check1 == a[k] || check2 == a[k] || check3 == a[k] || check4 == a[k])
                    {
                        if (check3 == a[k] || check2 == a[k] || check1 == a[k] || check4 == a[k])
                        {
                            if (check3 == a[k] || check2 == a[k] || check1 == a[k] || check4 == a[k])
                            {
                            if (check3 == a[k] || check2 == a[k] || check1 == a[k] || check4 == a[k]) {
                                check = true;
                                result = j;
                                cout << result << endl;
                                break;
                                }
                            }
                        }
                    }
                    else
                    {
                        check = false;
                    }
                }
            }
            else if (to_string(j).length() == 5)
            {
                check1 = m % 10;
                check2 = m % 100 / 10;
                check3 = m % 1000 / 100;
                check4 = m % 10000 / 1000;
                check5 = m % 100000 / 10000;
                for (int k = 0; k < n; k++)
                {
                    if (check1 == a[k] || check2 == a[k] || check3 == a[k] || check4 == a[k] || check5 == a[k])
                    {
                        if (check3 == a[k] || check2 == a[k] || check1 == a[k] || check4 == a[k] || check5 == a[k])
                        {
                            if (check3 == a[k] || check2 == a[k] || check1 == a[k] || check4 == a[k] || check5 == a[k])
                            {
                                if (check3 == a[k] || check2 == a[k] || check1 == a[k] || check4 == a[k] || check5 == a[k])
                                {
                                if (check3 == a[k] || check2 == a[k] || check1 == a[k] || check4 == a[k] || check5 == a[k]) {
                                    check = true;
                                    result = j;
                                    cout << result << endl;
                                    break;
                                }
                                }
                            }
                        }
                    }
                    else
                    {
                        check = false;
                    }
                }
            }
            else if (to_string(j).length() == 6)
            {
                check1 = m % 10;
                check2 = m % 100 / 10;
                check3 = m % 1000 / 100;
                check4 = m % 10000 / 1000;
                check5 = m % 100000 / 10000;
                check6 = m % 1000000 / 100000;
                for (int k = 0; k < n; k++)
                {
                    if (check1 == a[k] || check2 == a[k] || check3 == a[k] || check4 == a[k] || check5 == a[k] || check6 == a[k])
                    {
                        if (check3 == a[k] || check2 == a[k] || check1 == a[k] || check4 == a[k] || check5 == a[k] || check6 == a[k])
                        {
                            if (check3 == a[k] || check2 == a[k] || check1 == a[k] || check4 == a[k] || check5 == a[k] || check6 == a[k])
                            {
                                if (check3 == a[k] || check2 == a[k] || check1 == a[k] || check4 == a[k] || check5 == a[k] || check6 == a[k])
                                {
                                    if (check3 == a[k] || check2 == a[k] || check1 == a[k] || check4 == a[k] || check5 == a[k] || check6 == a[k])
                                    {
                                        check = true;
                                        result = j;
                                        cout << result << endl;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        check = false;
                    }
                }
            }
        }

    if (check) {
        cout << result; 
    } else {
        cout << "-1";
    }
}