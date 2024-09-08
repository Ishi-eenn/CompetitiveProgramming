#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  vector<vector<ll>> a(n + 1, vector<ll>(n + 1));
  for (ll i = 1; i <= n; ++i)
    for (ll j = 1; j <= i; ++j)
      cin >> a[i][j];

  ll curr = 1;
  for (ll i = 1; i <= n; ++i)
    if (curr <= i)
      curr = a[i][curr];
    else
      curr = a[curr][i];

  cout << curr << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
