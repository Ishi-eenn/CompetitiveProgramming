#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, m, ans = 0;
  cin >> n >> m;

  vector<ll> v, h, d1, d2;
  for(ll i = 0; i < m; i++) {
    ll x, y;
    cin >> x >> y;
    v.push_back(x);
    h.push_back(y);
    d1.push_back(x + y);
    d2.push_back(x - y);
  }

  sort(all(v));
  sort(all(h));
  sort(all(d1));
  sort(all(d2));

  v.erase(unique(all(v)), v.end());
  h.erase(unique(all(h)), h.end());
  d1.erase(unique(all(d1)), d1.end());
  d2.erase(unique(all(d2)), d2.end());

  for (ll i = 0; i < v.size(); i++)
    ans += n;

  for (ll i = 0; i < h.size(); i++)
    ans += n;

  for (ll i = 0; i < d1.size(); i++) {
    ll l = max(1ll, d1[i] - n), r = min(n, d1[i] - 1);
    ans += max(0ll, r - l + 1);
  }

  for (ll i = 0; i < d2.size(); i++) {
    ll l = max(1ll, 1 + d2[i]), r = min(n, n + d2[i]);
    ans += max(0ll, r - l + 1);
  }

  for (ll i = 0; i < v.size(); i++) {
    for (ll j = 0; j < h.size(); j++)
      ans -= 1;

    for (ll k = 0; k < d1.size(); k++)
      if (1 <= d1[k] - v[i] && d1[k] - v[i] <= n)
        ans -= 1;

    for (ll l = 0; l < d2.size(); l++)
      if (1 <= v[i] - d2[l] && v[i] - d2[l] <= n)
        ans -= 1;

  }

  for (ll i = 0; i < h.size(); i++) {
    for (ll j = 0; j < d1.size(); j++)
      if (1 <= d1[j] - h[i] && d1[j] - h[i] <= n)
        ans -= 1;

    for (ll k = 0; k < d2.size(); k++)
      if (1 <= d2[k] + h[i] && d2[k] + h[i] <= n)
        ans -= 1;

  }

  for (ll i = 0; i < d1.size(); i++)
    for (ll j = 0; j < d2.size(); j++) {
      if ((d1[i] + d2[j]) % 2 == 0) {
        ll x = (d1[i] + d2[j]) / 2, y = d1[i] - x;
        if (1 <= min(x, y) && max(x, y) <= n)
          ans -= 1;
      }
    }


  for (ll i = 0; i < v.size(); i++) {
    for (ll j = 0; j < h.size(); j++) {
      if (binary_search(all(d1), v[i] + h[j]))
        ans += 1;

      if (binary_search(all(d2), v[i] - h[j]))
        ans += 1;

    }
    for (ll k = 0; k < d1.size(); k++) {
      ll y = d1[k] - v[i];
      if (1 <= y && y <= n && binary_search(all(d2), v[i] - y))
        ans += 1;
    }
  }

  for (ll i = 0; i < h.size(); i++)
    for (ll j = 0; j < d1.size(); j++) {
      ll x = d1[j] - h[i];
      if (1 <= x && x <= n && binary_search(all(d2), x - h[i]))
        ans += 1;
    }


  for (ll i = 0; i < v.size(); i++)
    for (ll j = 0; j < h.size(); j++)
      if (binary_search(all(d1), v[i] + h[j]) && binary_search(all(d2), v[i] - h[j]))
        ans -= 1;

  cout << n * n - ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
