#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, r;
  cin >> n >> r;

  ll denominator = 1, numerator = 1;

  for(ll i = r; i > 0; i--)
    denominator *= i;

  for(ll i = n; i > n - r; i--)
    numerator *= i;

  cout << numerator / denominator << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
