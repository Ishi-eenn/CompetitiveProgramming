#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, t, a, win;
  cin >> n >> t >> a;

  if(t == a) {
    cout << "No" << endl;
    return;
  } else if(t > a)
    win = t;
  else
    win = a;

  if(n / 2 < win)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
