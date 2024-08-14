#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  vector<string> directions = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW", "N"};
  vector<long long> windThresholds = {2, 15, 33, 54, 79, 107, 138, 171, 207, 244, 284, 326};

  ll dir, w;
  cin >> dir >> w;

  ll directionIndex = (dir + 112) / 225;
  ll windSpeed = (w + 3) / 6;
  ll windScale = upper_bound(windThresholds.begin(), windThresholds.end(), windSpeed) - windThresholds.begin();

  cout << (windScale == 0 ? "C 0" : directions[directionIndex] + " " + to_string(windScale)) << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t = 1;
  // cin >> t;
  while(t--)
    solve();

  return 0;
}
