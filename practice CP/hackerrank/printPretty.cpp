// #include <iostream>
// #include <iomanip> 
// using namespace std;

// int main() {
// 	int T; cin >> T;
// 	cout << setiosflags(ios::uppercase);
// 	cout << setw(0xf) << internal;
// 	while(T--) {
// 		double A; cin >> A;
// 		double B; cin >> B;
// 		double C; cin >> C;

// 		/* Enter your code here */
//         // 1
//         // cout << hex << "0x"  << (int)A << endl; 
//         printf("0x%x", (int)A);
//         // 2 
//         double temp = ((double) (int)(B * 100 + 0.5)) / 100;
//         double temp2 = temp;
//         int tempLen;
//         while ((int)temp2 > 0) {
//             temp2 /= 10;
//             tempLen++;
//         }
//         cout << "    " << endl;
//         if (temp > 0) {
//             // 3, decimal to dot
//             // 1, + or -
//             for (int i=0;i<15-tempLen-4;i++) {
//                 cout << "_";
//             }
//             cout << "+" << temp << endl;
//         } else {
//             for (int i=0;i<15-tempLen-4;i++) {
//                 cout << "_";
//             }
//             cout << temp << endl;
//         }
//         // 3
//         cout.precision(9);
//         cout << scientific << C << endl;
// 	}
// 	return 0;

// }

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
		cout << hex << left << showbase << nouppercase << (long long) A << endl;
		cout << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2) << B << endl;
		cout << scientific << uppercase << noshowpos << setprecision(9) << C << endl;
		cout << scientific << nouppercase << setprecision(9) << C << endl;
	}
	return 0;

}