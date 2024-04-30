#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, d;
	cin >> n;

	vector<int> a(n), l_max(n + 2, 0), r_max(n + 2, 0);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	cin >> d;

	for(int i = 1; i <= n; i++)
		l_max[i] = max(l_max[i - 1], a[i - 1]);

	for(int i = n; i >= 1; i--)
		r_max[i] = max(r_max[i + 1], a[i - 1]);

	for(int i = 0; i < d; i++){
		int l, r;
		cin >> l >> r;
		cout << max(l_max[l - 1], r_max[r + 1]) << endl;
	}
}

// int main(){
// 	int n;
// 	cin >> n;

// 	vector<int> a(n), l_max(n + 2, 0), r_max(n + 2, 0);
// 	for (int i = 0; i < n; i++)
// 		cin >> a[i];

// 	int d;
// 	cin >> d;

// 	vector<int> l(d), r(d);
// 	for (int i = 0; i < d; i++)
// 		cin >> l[i] >> r[i];

// 	for(int i = 1; i <= n; i++)
// 		l_max[i] = max(l_max[i - 1], a[i - 1]);

// 	for(int i = n; i >= 1; i--)
// 		r_max[i] = max(r_max[i + 1], a[i - 1]);

// 	for(int i = 0; i < d; i++){
// 		int ans = max(l_max[l[i] - 1], r_max[r[i] + 1]);
// 		cout << ans << endl;
// 	}
// }
