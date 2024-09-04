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
  for(ll i = 1; i <= n / i; i++)
    if(n % i == 0) {
      ans.push_back(i);
      if(i != n / i) ans.push_back(n / i);
    }

  sort(all(ans));
  for(ll i = 0; i < ans.size(); i++)
    cout << ans[i] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
