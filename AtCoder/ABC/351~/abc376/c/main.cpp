#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

bool test(ll x, ll n, vector<pair<ll,ll>>& toys, vector<ll>& b) {
  multiset<ll> boxes;
  for(ll i = 0; i < n-1; i++)
    boxes.insert(b[i]);
  boxes.insert(x);

  for(auto [size, idx] : toys) {
    auto it = boxes.lower_bound(size);
    if(it == boxes.end())
      return false;
    boxes.erase(it);
  }
  return true;
}

void solve() {
  ll n, ok = 1e9 + 1, ng = 0;
  cin >> n;

  vector<ll> a(n), b(n - 1);
  for(auto& e : a) cin >> e;
  for(auto& e : b) cin >> e;

  vector<pair<ll,ll>> toys;
  for(ll i = 0; i < n; i++)
    toys.push_back({a[i], i});
  sort(rall(toys));

  while(ok - ng > 1) {
    ll mid = ng + (ok - ng) / 2;
    if(test(mid, n, toys, b))
      ok = mid;
    else ng = mid;
  }

  cout << (ok > 1e9 ? -1 : ok) << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
}
