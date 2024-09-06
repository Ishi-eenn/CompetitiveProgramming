#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, result = 0;
  cin >> n;

  const ll max = 100000;
  vector<ll> cnt(max + 1, 0);
  for(ll i = 0; i < n; i++) {
    ll a;
    cin >> a;
    cnt[a]++;
  }

  for(ll i = 1; i < max / 2; i++)
    result += cnt[i] * cnt[max - i];
  result += cnt[max / 2] * (cnt[max / 2] - 1) / 2;

  cout << result << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
