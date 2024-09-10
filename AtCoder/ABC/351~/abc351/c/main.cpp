#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, a, cnt = 0;
  cin >> n;

  vector<ll> ball(n);
  for (ll i = 0; i < n; i++) {
    cin >> a;
    cnt++;
    ball[cnt] = a;
    while (cnt > 1 && ball[cnt] == ball[cnt - 1]) {
      cnt--;
      ball[cnt]++;
    }
  }

  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
