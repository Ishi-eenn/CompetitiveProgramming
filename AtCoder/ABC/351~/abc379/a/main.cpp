#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

namespace Ishi_eenn
{
  void solve() {
    char a, b, c;
    cin >> a >> b >> c;

    cout << b << c << a << " " << c << a << b << endl;
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
