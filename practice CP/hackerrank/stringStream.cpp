#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    char ch; 
    int x;
    vector <int> v;
    stringstream ss(str);

    ss >> x >> ch;
    v.push_back(x);
    while (ss ) {
        v.push_back(x);
    }
    return v;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}