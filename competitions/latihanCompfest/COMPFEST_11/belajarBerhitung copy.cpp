#include <bits/stdc++.h>
#include <numeric>

using namespace std;

int main(){
    long long n, l, r; cin >> n;
    vector<long long> s;
    list<long long> s_list;


    for (int i = 0; i < n; i++) {
        cin >> l >> r;  
        for (int j = l; j <= r; j++) {
            s_list.push_back(j);
        }
    }

    long long sum = 0;
    // for (int i = 0; i < s_list.size(); i++) {
    //     sum += s_list[i];
    // }

    for (std::list<long long>::iterator it = s_list.begin(); it != s_list.end(); ++it)
    {
        // product = product * (*it);
        sum += *it; 
        cout << sum << "\n";
    }
    // sum = accumulate(begin(s_list), end(s_list), sum);

    cout << sum;
}

// 1 3 
// 5 7