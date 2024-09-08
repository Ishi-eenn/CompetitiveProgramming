#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll a, b;
  cin >> a >> b;

  ll min = std::min(a, b);
  ll max = std::max(a, b);

  if(min == max) {
    cout << 1 << endl;
    return;
  }

  for(ll i = min + 1; i <= max + 1; ++i) {
    if(i - min == max - i) {
      cout << 3 << endl;
      return;
    }
  }
  cout << 2 << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
