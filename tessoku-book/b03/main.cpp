#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(auto &e : a) cin >> e;

  for(ll i = 0; i < n - 2; i++)
    for(ll j = i + 1; j < n - 1; j++)
      for(ll k = j + 1; k < n; k++)
        if(a[i] + a[j] + a[k] == 1000) {
          cout << "Yes" << endl;
          return;
        }

  cout << "No" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
