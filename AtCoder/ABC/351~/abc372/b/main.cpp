#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll m;
  cin >> m;

  vector<ll> a;
  for (ll i = 0; i <= 10; i++) {
    for (ll j = 0; j < (m % 3); j++)
      a.push_back(i);
    m /= 3;
  }
  cout << a.size() << endl;
  for(ll i = 0; i < a.size(); i++)
    cout << a[i] << " ";
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
