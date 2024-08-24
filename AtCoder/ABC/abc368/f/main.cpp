#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

const int max_n = 1e6;

vector<ll> dp(max_n, -1);

ll calculate(ll n) {
  if (n == 1)
    return 0;
  if (dp[n] != -1)
    return dp[n];

  vector<ll> divisors_grundy;
  for (ll i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      if (i != n)
        divisors_grundy.push_back(calculate(i));
      if (n / i != i && n / i != n)
        divisors_grundy.push_back(calculate(n / i));
    }
  }

  ll mex = 0;
  while (find(all(divisors_grundy), mex) != divisors_grundy.end()) mex++;

  return dp[n] = mex;
}

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(auto &e : a) cin >> e;

  ll xor_sum = 0;
  for (ll i = 0; i < n; i++)
    xor_sum ^= calculate(a[i]);

  if (xor_sum == 0)
    cout << "Bruno" << endl;
  else
    cout << "Anna" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
