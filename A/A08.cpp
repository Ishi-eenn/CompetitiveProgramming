#include <bits/stdc++.h>
using namespace std;

int main(){
	int h, w, q;

	cin >> h >> w;

	vector<vector<int> > sum(h + 1, vector<int>(w + 1, 0));

	for(int i = 1; i <= h; i++){
		for(int j = 1; j <= w; j++){
			int x;
			cin >> x;
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + x;
		}
	}

	cin >> q;

	for(int i = 0; i < q; i++){
		int a, b, c, d;

		cin >> a >> b >> c >> d;

		cout << sum[a - 1][b - 1] + sum[c][d] - sum[a - 1][d] - sum[c][b - 1] << endl;
	}
}

// int main(){
// 	int h, w, q;

// 	cin >> h >> w;

// 	vector<vector<int> > x(h + 1, vector<int>(w + 1, 0));
// 	vector<vector<int> > sum(h + 1, vector<int>(w + 1, 0));

// 	for(int i = 1; i <= h; i++)
// 		for(int j = 1; j <= w; j++)
// 			cin >> x[i][j];

// 	for(int i = 1; i <= h; i++)
// 		for(int j = 1; j <= w; j++)
// 			sum[i][j] = x[i][j] + sum[i][j - 1];

// 	for(int i = 1; i <= h; i++)
// 		for(int j = 1; j <= w; j++)
// 			sum[i][j] = sum[i - 1][j] + sum[i][j];

// 	cin >> q;

// 	for(int i = 0; i < q; i++){
// 		int a, b, c, d;

// 		cin >> a >> b >> c >> d;

// 		cout << sum[a - 1][b - 1] + sum[c][d] - sum[a - 1][d] - sum[c][b - 1] << endl;
// 	}
// }
