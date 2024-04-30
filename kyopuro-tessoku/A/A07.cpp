#include <bits/stdc++.h>
using namespace std;

int main(){
	int d, n;

	cin >> d >> n;

	vector<int> sum(d + 1, 0);

	for(int i = 0; i < n; i++){
		int l, r;
		cin >> l >> r;
		sum[l] += 1;
		sum[r + 1] -= 1;
		// cout << "l: " << l << " r: " << r << endl;
	}

	for(int i = 1; i <= d; i++){
		sum[i] += sum[i - 1];
		cout << sum[i] << endl;
	}

	return (0);
}
