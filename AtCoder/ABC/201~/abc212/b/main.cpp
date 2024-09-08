#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  string s;
  cin >> s;

  vector<ll> x(4);
  for(ll i = 0; i < s.size(); i++)
    x[i] = s[i] - '0';

  if(x[0] == x[1] && x[1] == x[2] && x[2] == x[3])
    cout << "Weak" << endl;
  else if((x[0] + 1) % 10 == x[1] && (x[1] + 1) % 10 == x[2] && (x[2] + 1) % 10 == x[3])
    cout << "Weak" << endl;
  else
    cout << "Strong" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
