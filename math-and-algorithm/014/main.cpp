#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  vector<ll> ans;
  for(ll i = 2; i <= n / i; i++)
    while(n % i == 0) {
      ans.push_back(i);
      n /= i;
    }

  if(n != 1) ans.push_back(n);

  sort(all(ans));
  for(ll i = 0; i < ans.size(); i++)
    cout << ans[i] << " \n"[i == ans.size() - 1];
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
