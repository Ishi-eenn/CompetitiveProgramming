#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  vector<ll> h(n);
  for(auto &e : h)
    cin >> e;

  ll t = 0, current_enemy = 0;

  while(current_enemy < n) {
    t++;
    if(h[current_enemy] > 0) {
      if(t % 3 == 0)
        h[current_enemy] -= 3;
      else
        h[current_enemy] -= 1;
    }

    while(current_enemy < n && h[current_enemy] <= 0)
      current_enemy++;
  }

  cout << t << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
