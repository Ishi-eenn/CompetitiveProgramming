#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n), b(n), c(n);
  for (ll i = 0; i < n; i++)
    cin >> a[i] >> b[i];

  transform(b.begin(), b.end(), a.begin(), c.begin(), minus<ll>());
  cout << accumulate(all(a), 0LL) + *max_element(all(c)) << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
