#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll a, b, c;
  cin >> a >> b >> c;

  if (c < b)
    cout << (c <= a && a < b ? "Yes" : "No") << endl;
  else
    cout << (a >= c || a < b ? "Yes" : "No") << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
