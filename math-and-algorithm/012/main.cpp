#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

ll is_prime(ll n) {
  if(n == 2) return 1;
  if(n % 2 == 0) return 0;

  for(ll i = 3; i * i <= n; i += 2)
    if(n % i == 0) return 0;

  return 1;
}

void solve() {
  ll n;
  cin >> n;

  cout << (is_prime(n) ? "Yes" : "No") << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
