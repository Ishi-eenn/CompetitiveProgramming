#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, q;
  cin >> n;

  vector<vector<vector<ll>>> A(n + 1, vector<vector<ll>>(n + 1, vector<ll>(n + 1)));
  vector<vector<vector<ll>>> S(n + 1, vector<vector<ll>>(n + 1, vector<ll>(n + 1, 0)));

  for (ll i = 1; i <= n; i++) {
    for (ll j = 1; j <= n; j++) {
      for (ll k = 1; k <= n; k++) {
        cin >> A[i][j][k];
        S[i][j][k] = A[i][j][k]
                     + S[i-1][j][k] + S[i][j-1][k] + S[i][j][k-1]
                     - S[i-1][j-1][k] - S[i-1][j][k-1] - S[i][j-1][k-1]
                     + S[i-1][j-1][k-1];
      }
    }
  }

  cin >> q;
  vector<vector<ll>> queries(q, vector<ll>(6));

  for (ll i = 0; i < q; i++) {
    for (ll j = 0; j < 6; j++) {
      cin >> queries[i][j];
    }

    ll x1 = queries[i][0], x2 = queries[i][1];
    ll y1 = queries[i][2], y2 = queries[i][3];
    ll z1 = queries[i][4], z2 = queries[i][5];

    ll sum = S[x2][y2][z2]
           - (x1 > 1 ? S[x1-1][y2][z2] : 0)
           - (y1 > 1 ? S[x2][y1-1][z2] : 0)
           - (z1 > 1 ? S[x2][y2][z1-1] : 0)
           + (x1 > 1 && y1 > 1 ? S[x1-1][y1-1][z2] : 0)
           + (x1 > 1 && z1 > 1 ? S[x1-1][y2][z1-1] : 0)
           + (y1 > 1 && z1 > 1 ? S[x2][y1-1][z1-1] : 0)
           - (x1 > 1 && y1 > 1 && z1 > 1 ? S[x1-1][y1-1][z1-1] : 0);

    cout << sum << endl;
  }
}
