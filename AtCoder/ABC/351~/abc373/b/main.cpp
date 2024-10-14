#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

ll abs_ll(ll x) {
  return x < 0 ? -x : x;
}

void solve() {
  ll cnt = 0;
  string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string s;
  cin >> s;

  for(ll i = 1; i < alphabet.size(); i++)
    cnt += abs_ll(s.find(alphabet[i - 1]) - s.find(alphabet[i]));
  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
