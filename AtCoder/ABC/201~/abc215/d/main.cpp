#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

vector<ll> calc(ll n) {
  cout << "n: " << n << endl;
  vector<ll> res;
  for (ll i = 2; i * i <= n; i++)
    while (n % i == 0) {
      res.push_back(i);
      n /= i;
    }

  if(n != 1)
    res.push_back(n);

  for(auto &e : res)
    cout << e << " ";

  cout << endl;
  return res;
}

void solve() {
  ll n, m, cnt = 0;
  cin >> n >> m;

  vector<ll> a(n), b(n, 0);
  for(auto &e : a) cin >> e;

  map<ll, ll> mp;
  for(auto &e : a) {
    vector<ll> v = calc(e);
    for(auto &f : v)
      mp[f]++;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
