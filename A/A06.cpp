#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, q;

	cin >> n >> q;

	vector<int> a(n), sum(n + 1, 0);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum[i + 1] = sum[i] + a[i];
	}

	vector<int> l(q), r(q);
	for(int i = 0; i < q; i++){
		cin >> l[i] >> r[i];
	}

	for(int i = 0; i < q; i++){
		cout << sum[r[i]] - sum[l[i] - 1] << endl;
	}
	return (0);
}
