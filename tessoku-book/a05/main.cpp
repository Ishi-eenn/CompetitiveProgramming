#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, k, cnt = 0;
  cin >> n >> k;

  for(ll i = 1; i <= n; i++)
    for(ll j = 1; j <= n; j++)
      if(0 < k - i - j && k - i - j <= n)
        cnt++;

  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
