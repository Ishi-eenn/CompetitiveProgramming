#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

namespace Ishi_eenn
{
  void solve() {
    ll n, k, ans = 0;
    cin >> n >> k;

    string s;
    cin >> s;

    string t = string(k, 'O');
    for (ll i = 0; i < n - k + 1; ++i) {
      if (s.substr(i, k) == t) {
        ans++;
        for (ll j = i; j < i + k; j++)
          s[j] = 'X';
      }
    }

    cout << ans << endl;
  }

  inline void Main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
  }
}

signed main() {
  Ishi_eenn::Main();
  return 0;
}
