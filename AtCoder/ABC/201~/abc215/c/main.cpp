#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll k, cnt = 0;
  string s;
  cin >> s >> k;

  sort(all(s));
  do {
    cnt++;
    if(cnt == k)
      cout << s << endl;
  } while (next_permutation(all(s)));
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
