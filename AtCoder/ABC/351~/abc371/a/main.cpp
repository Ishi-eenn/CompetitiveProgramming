#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  char sab, sac, sbc;
  cin >> sab >> sac >> sbc;

  ll a = 0, b = 0, c = 0;

  if (sab == '<') b++;
  else a++;

  if (sac == '<') c++;
  else a++;

  if (sbc == '<') c++;
  else b++;

  if (a == 1)
    cout << "A" << endl;
  else if (b == 1)
    cout << "B" << endl;
  else
    cout << "C" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
