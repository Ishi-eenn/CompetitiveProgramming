#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll q;
  cin >> q;

  priority_queue<ll, vector<ll>, greater<ll>> pq;
  ll add_all = 0;

  for (ll i = 0; i < q; i++) {
    ll n, x;
    cin >> n;

    if (n == 1) {
      cin >> x;
      pq.push(x - add_all);
    }
    else if (n == 2) {
      cin >> x;
      add_all += x;
    }
    else if (n == 3) {
      ll min_val = pq.top() + add_all;
      cout << min_val << endl;
      pq.pop();
    }
  }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}
