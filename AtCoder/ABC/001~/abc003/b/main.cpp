#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  string s, t;
  cin >> s >> t;

  string atcoder = "atcoder";

  for(ll i = 0; i < s.size(); ++i) {
    if(s[i] != t[i]) {
      if(s[i] == '@' && atcoder.find(t[i]) != string::npos)
        continue;
      else if(t[i] == '@' && atcoder.find(s[i]) != string::npos)
        continue;
      else {
        cout << "You will lose" << endl;
        return;
      }
    }
  }
  cout << "You can win" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
