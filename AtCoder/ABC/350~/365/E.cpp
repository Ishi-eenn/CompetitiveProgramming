#include <bits/stdc++.h>
using namespace std;

vector<long long> dec2bi(long long n) {
  vector<long long> res;
  while (n > 0) {
    res.push_back(n % 2);
    n /= 2;
  }
  return res;
}

int main() {
  long long n;
  cin >> n;
  vector<long long> a(n);
  for (long long i = 0; i < n; ++i)
    cin >> a[i];

  vector<vector<long long>> a_bi(n);
  for (long long i = 0; i < n; ++i)
    a_bi[i] = dec2bi(a[i]);

  long long m = 0;
  for (long long i = 0; i < n; ++i)
    m = max(m, (long long)a_bi[i].size());

  for (long long i = 0; i < n; ++i)
    a_bi[i].resize(m, 0);


  vector<vector<long long>> XOR(n, vector<long long>(m, 0));
  for (long long i = 0; i < n; ++i) {
    for (long long j = 0; j < m; ++j) {
      if (i == 0)
        XOR[i][j] = a_bi[i][j];
      else
        XOR[i][j] = XOR[i-1][j] ^ a_bi[i][j];
    }
  }

  vector<vector<long long>> zeros(n, vector<long long>(m, 0));
  for (long long i = 0; i < n; ++i) {
    for (long long j = 0; j < m; ++j) {
      if (i == 0)
        zeros[i][j] = XOR[i][j] == 0;
      else
        zeros[i][j] = zeros[i-1][j] + (XOR[i][j] == 0);
    }
  }

  vector<long long> res(m, 0);
  for (long long i = 1; i < n; ++i) {
    for (long long j = 0; j < m; ++j) {
      if (i == 1) {
        res[j] += XOR[1][j];
        continue;
      }
      if (XOR[i][j] == 1)
        res[j] += zeros[i-2][j];
      else
        res[j] += (i-1-zeros[i-2][j]);
      res[j] += XOR[i][j];
    }
  }

  long long ans = 0;
  for (long long j = 0; j < m; ++j)
    ans += (1LL << j) * res[j];

  cout << ans << endl;
}
