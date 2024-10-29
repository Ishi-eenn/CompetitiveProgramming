#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, w, cnt = 0;
  cin >> n >> w;

  vector<ll> a(n), arr;
  for(auto &e : a) cin >> e;

  for(ll i = 0; i < n; i++)
    arr.push_back(a[i]);

  for(ll i = 0; i < n - 1; i++)
    for(ll j = i + 1; j < n; j++)
      arr.push_back(a[i] + a[j]);

  for(ll i = 0; i < n - 2; i++)
    for(ll j = i + 1; j < n - 1; j++)
      for(ll k = j + 1; k < n; k++)
        arr.push_back(a[i] + a[j] + a[k]);

  sort(all(arr));
  arr.erase(unique(all(arr)), arr.end());

  for(auto &e : arr)
    if(e <= w)
      cnt++;

  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
