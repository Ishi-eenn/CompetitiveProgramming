#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll d, n, cnt = 0;
  cin >> d >> n;

  vector<ll> l(n), r(n), s(d + 1, 0);
  for(ll i = 0; i < n; i++) {
    cin >> l[i] >> r[i];
    s[l[i]]++;
    s[r[i] + 1]--;
  }

  for(ll i = 1; i <= d; i++) {
    cnt += s[i];
    cout << cnt << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
