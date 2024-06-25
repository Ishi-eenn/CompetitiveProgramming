#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, n, a, b, c, d;

  cin >> h >> w >> n;

  vector<vector<int> > t(h + 2, vector<int>(w + 2, 0));

  for (int i = 0; i < n; i++) {
    cin >> a >> b >> c >> d;
    t[a][b]++;
    t[a][d + 1]--;
    t[c + 1][b]--;
    t[c + 1][d + 1]++;
  }

  for (int i = 1; i <= h; i++)
    for (int j = 1; j <= w; j++)
      t[i][j] += t[i][j - 1];

  for (int i = 1; i <= h; i++)
    for (int j = 1; j <= w; j++)
      t[i][j] += t[i - 1][j];

  for (int i = 1; i <= h; i++)
    for (int j = 1; j <= w; j++)
      cout << t[i][j] << (j == w ? "\n" : " ");
}
