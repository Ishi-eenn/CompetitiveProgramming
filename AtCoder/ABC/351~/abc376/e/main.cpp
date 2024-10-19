#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, k;
  cin >> n >> k;

  vector<pair<ll, ll>> ab(n);
  for (ll i = 0; i < n; ++i) cin >> ab[i].first;
  for (ll i = 0; i < n; ++i) cin >> ab[i].second;

  sort(all(ab));

  ll min_result = LLONG_MAX, sum_b = 0;
  priority_queue<ll> pq;

  for (ll i = 0; i < n; ++i) {
    sum_b += ab[i].second;
    pq.push(ab[i].second);

    if (pq.size() > k) {
      sum_b -= pq.top();
      pq.pop();
    }

    if (pq.size() == k)
      min_result = min(min_result, ab[i].first * sum_b);
  }

  cout << min_result << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll t;
  cin >> t;
  while (t--) solve();
}
