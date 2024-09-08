#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll m;
  cin >> m;

  if(m < 100)
    cout << "00" << endl;
  else if(100 <= m && m <= 5000)
    cout << setfill('0') << setw(2) << m / 100 << endl;
  else if(6000 <= m && m <= 30000)
    cout << m / 1000 + 50 << endl;
  else if(35000 <= m && m <= 70000)
    cout << (m / 1000 - 30) / 5 + 80 << endl;
  else if(70000 < m)
    cout << 89 << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
