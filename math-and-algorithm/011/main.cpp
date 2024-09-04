#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

ll is_prime(ll n) {
  if(n == 2) return 1;
  if(n % 2 == 0) return 0;

  for(ll i = 3; i * i <= n; i += 2)
    if(n % i == 0) return 0;

  return 1;
}

void solve() {
  ll n;
  cin >> n;

  vector<ll> ans;

  for(ll i = 2; i <= n; i++)
    if(is_prime(i))
      ans.push_back(i);

  for(ll i = 0; i < ans.size(); i++)
    cout << ans[i] << " \n"[i == ans.size() - 1];
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
