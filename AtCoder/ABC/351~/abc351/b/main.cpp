#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  vector<string> a(n), b(n);
  for(auto &e : a) cin >> e;
  for(auto &e : b) cin >> e;

  for (ll i = 0; i < n; i++)
    for (ll j = 0; j < n; j++)
      if (a[i][j] != b[i][j])
        cout << i + 1 << " " << j + 1 << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
