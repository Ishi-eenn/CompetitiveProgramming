#include <bits/stdc++.h>
using namespace std;

int main(){
	int h, w, n;

	cin >> h >> w >> n;

	vector<vector<int> > snow(h + 2, vector<int>(w + 2, 0));

	for(int i = 0; i < n; i++){
		int a, b, c, d;

		cin >> a >> b >> c >> d;

		snow[a][b]++;
		snow[a][d + 1]--;
		snow[c + 1][b]--;
		snow[c + 1][d + 1]++;
	}

	for (int i = 1; i <= h; i++){
		for (int j = 1; j <= w; j++){
			snow[i][j] += snow[i][j - 1] + snow[i - 1][j] - snow[i - 1][j - 1];
			cout << snow[i][j] << " ";
		}
		cout << endl;
	}
}

// int main(){
// 	int h, w, n;

// 	cin >> h >> w >> n;

// 	vector<vector<int> > snow(h + 2, vector<int>(w + 2, 0));

// 	for(int i = 0; i < n; i++){
// 		int a, b, c, d;

// 		cin >> a >> b >> c >> d;

// 		snow[a][b]++;
// 		snow[a][d + 1]--;
// 		snow[c + 1][b]--;
// 		snow[c + 1][d + 1]++;
// 	}

// 	for (int i = 1; i <= h; i++)
// 		for (int j = 1; j <= w; j++)
// 			snow[i][j] += snow[i][j - 1];

// 	for (int i = 1; i <= h; i++)
// 		for (int j = 1; j <= w; j++)
// 			snow[i][j] += snow[i - 1][j];

// 	for (int i = 1; i <= h; i++){
// 		for (int j = 1; j <= w; j++)
// 			cout << snow[i][j] << " ";
// 		cout << endl;
// 	}
// }
