#include <bits/stdc++.h>
using namespace std;

// Other solution
int main() {
	int n;

	cin >> n;

	bitset<10> bits(n);
	cout << bits << endl;
}

// int main() {
// 	int n;

// 	cin >> n;

// 	for(int exponent = 9; exponent >= 0; exponent--){
// 		int divisor = (1 << exponent);
// 		cout << (n / divisor) % 2;
// 	}
// 	cout << endl;
// 	return 0;
// }
