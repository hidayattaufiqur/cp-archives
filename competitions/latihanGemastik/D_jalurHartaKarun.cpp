#include <iostream>
#include <cstdio>

using namespace std;

struct roomData {
    int roomNo;
    int value;
};

struct doorConnection {
    int a;
    int b;
};


int main(){
    int n, k, result; 
    bool thereIsConnection = true;
    cin >> n >> k;
    roomData tabRoom[n];
    doorConnection tabDoor[k];

    for (int i = 0; i < n; i++) {
        cin >> tabRoom[i].value;
        tabRoom[i].roomNo = i;
    };

    for (int i = 0; i < k; i++) {
        cin >> tabDoor[i].a >> tabDoor[i].b;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            roomData temp[k];
            if (tabRoom[i].value < tabRoom[j].value) {
                temp[0] = tabRoom[i];
                tabRoom[i] = tabRoom[j];
                tabRoom[j] = temp[0];
            };   
        };
    };



    // while (thereIsConnection) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (j != 0 && tabDoor[j].a == tabRoom[i].roomNo || tabDoor[j].b == tabRoom[i].roomNo) {
                result += tabRoom[tabDoor[j].a].value + tabRoom[tabDoor[j].b].value;
            } else if (tabDoor[j].a == tabRoom[i].roomNo || tabDoor[j].b == tabRoom[i].roomNo) {
                result += tabRoom[tabDoor[j].a].value + tabRoom[tabDoor[j].b].value;
            }
        }
    }
    cout << result;
}