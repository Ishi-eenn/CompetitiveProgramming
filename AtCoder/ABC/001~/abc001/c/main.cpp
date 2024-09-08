#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  vector<string> dir = { "N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW", "N" };
  vector<ll> wind = { 2, 15, 33, 54, 79, 107, 138, 171, 207, 244, 284, 326 };

  ll deg, dis, w = 0;
  cin >> deg >> dis;

  deg = (deg + 112) / 225;
  dis = (dis + 3) / 6;
  while (w < 12 && dis > wind[w])
    w++;

  if (!w)
    cout << "C 0" << endl;
  else
    cout << dir[deg] << " " << w << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
