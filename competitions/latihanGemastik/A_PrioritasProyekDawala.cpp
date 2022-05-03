#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

struct dataDesa {
    string nama1;
    int x1;
    int y1;
    int r1;
    string nama2;
    int x2;
    int y2;
    int r2;
    int result;
};

const int nmax = 101;

void sortResults(dataDesa data[nmax], int p) {
    dataDesa temp[nmax];
    for (int i = 0; i < p; i++)  {
        for (int j = i + 1; j < p; j++)  {
        if (data[i].result < data[j].result) {
            temp[0] = data[i];
            data[i] = data[j];
            data[j] = temp[0];
        };
    };
    };
}

int main() {
    dataDesa dataDesa[nmax];
    int p; 
    string desa1, x1, y1, r1, desa2, x2, y2, r2;
    cin >> p;
    for (int i = 0; i < p; i++) {
        // getline(cin, desa1);
        // scanf("%s %s %s %s %s %s %s %s", desa1, x1, y1, r1, desa2, x2, y2, r2);
        cin >> dataDesa[i].nama1 >> dataDesa[i].x1 >> dataDesa[i].y1 >> dataDesa[i].r1 >> dataDesa[i].nama2 >> dataDesa[i].x2 >> dataDesa[i].y2 >> dataDesa[i].r2;
        dataDesa[i].result = sqrt(pow(dataDesa[i].x2 - dataDesa[i].x1, 2) + pow(dataDesa[i].y2 - dataDesa[i].y1, 2));
        // dataDesa[i].append(desa1);
        // dataDesa[i].append(x1);
        // dataDesa[i].append(y1);
        // dataDesa[i].append(r1);
        // dataDesa[i].append(desa2);
        // dataDesa[i].append(x2);
        // dataDesa[i].append(y2);
        // dataDesa[i].append(r2);
    };
    
    // cout << dataDesa[0]. << " " << dataDesa[2].result;
    sortResults(dataDesa, p);

    for (int i = 0; i < p; i++) {
        cout << dataDesa[i].nama1 << " " << dataDesa[i].nama2 << " " << dataDesa[i].result << endl;
    };
    // cout << dataDesa[0]. << " " << dataDesa[2].result;

};

