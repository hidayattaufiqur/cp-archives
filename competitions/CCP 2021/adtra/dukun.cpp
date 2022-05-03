#include <string.h>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s ;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> s;
        sort(s.begin(),s.end());
        if(s.find('7') != string::npos && s.find('5') != string::npos){
            cout<<"Beruntung"<<endl;
        }else if(s.find('5') != string::npos && s.find('0') != string::npos){
            cout<<"Beruntung"<<endl;
        }else if(s.find('2') != string::npos && s.find('5') != string::npos){
            cout<<"Beruntung"<<endl;
        }else if (s.substr(0,2)=="00"){
            cout<<"Beruntung"<<endl;
        }else {
            cout << "Tidak Beruntung"<<endl;
        }

    }
    return 0;
}