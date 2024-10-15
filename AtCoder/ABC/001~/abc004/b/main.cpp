#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  vector<string> c(4);
  for(ll i = 0; i < 4; i++)
    for(ll j = 0; j < 4; j++)
      cin >> c[i][j];

  for(ll i = 3; i >= 0; i--) {
    for(ll j = 3; j >= 0; j--)
      cout << c[i][j] << (j == 0 ? '\n' : ' ');
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
