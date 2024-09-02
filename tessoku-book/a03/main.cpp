#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, k;
  cin >> n >> k;

  vector<ll> p(n), q(n);
  for(auto &e : p) cin >> e;
  for(auto &e : q) cin >> e;

  for(auto &pi : p)
    for(auto &qi : q) {
      if(pi + qi == k) {
        cout << "Yes" << endl;
        return;
      }
    }

  cout << "No" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
