#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, w, q;

  cin >> h >> w;

  vector<vector<int> > x(h, vector<int>(w)), t(h + 1, vector<int>(w + 1, 0));
  for (int i = 0; i < h; i++)
    for (int j = 0; j < w; j++)
      cin >> x[i][j];

  cin >> q;
  vector<int> a(q), b(q), c(q), d(q);

  for (int i = 0; i < q; i++)
    cin >> a[i] >> b[i] >> c[i] >> d[i];

  for (int i = 1; i <= h; i++)
    for (int j = 1; j <= w; j++)
      t[i][j] = t[i][j - 1] + x[i - 1][j - 1];

  for (int i = 1; i <= h; i++)
    for (int j = 1; j <= w; j++)
      t[i][j] += t[i - 1][j];

  for (int i = 0; i < q; i++)
    cout << t[c[i]][d[i]] + t[a[i] - 1][b[i] - 1] - t[a[i] - 1][d[i]] - t[c[i]][b[i] - 1] << endl;
}
