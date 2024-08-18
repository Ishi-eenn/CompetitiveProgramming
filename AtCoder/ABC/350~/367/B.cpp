#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  double x;
  cin >> x;

  stringstream ss;
  ss << fixed << setprecision(3) << x;
  string s = ss.str();

  while (s.back() == '0')
    s.pop_back();

  if (s.back() == '.')
    s.pop_back();

  cout << s << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t = 1;
  // cin >> t;
  while(t--)
      solve();

  return 0;
}
