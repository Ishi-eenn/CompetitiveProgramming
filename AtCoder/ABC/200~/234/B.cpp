#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  double dist = 0;
  cin >> n;

  vector<ll> x(n), y(n);
  for(ll i = 0; i < n; i++)
    cin >> x[i] >> y[i];

  for(ll i = 0; i < n; i++)
    for(ll j = 0; j < n; j++)
      if(dist < sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2)))
        dist = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));

  cout << fixed << setprecision(10) << dist << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t = 1;
  // cin >> t;
  while(t--)
    solve();

  return 0;
}
