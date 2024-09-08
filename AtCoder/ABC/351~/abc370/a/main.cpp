#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll l, r;
  cin >> l >> r;

  if(l == 1 && r == 1)
    cout << "Invalid" << endl;
  else if(l == 0 && r == 0)
    cout << "Invalid" << endl;
  else if(l == 1)
    cout << "Yes" << endl;
  else if(r == 1)
    cout << "No" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
