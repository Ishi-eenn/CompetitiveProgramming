#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, cnt = 0;
  cin >> n;
  string s;
  cin >> s;
  for(ll i = 0; i < n - 2; i++)
    if(s[i] == '#' && s[i + 1] == '.' && s[i + 2] == '#')
      cnt++;

  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
