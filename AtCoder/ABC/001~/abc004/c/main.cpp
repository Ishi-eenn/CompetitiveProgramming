#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, a[] = {0, 1, 2, 3, 4, 5, 6};
  cin >> n;

  n %= 30;
  for(ll i = 0; i < n; i++)
    swap(a[i % 5 + 1], a[i % 5 + 2]);

  for(ll i = 1; i <= 6; i++)
    cout << a[i];
  cout << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
