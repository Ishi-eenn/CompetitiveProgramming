#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for(auto &e : a) cin >> e;

  sort(a.begin(), a.end());

  ll ans = 1e9;
  for(ll i = 0; i <= k; i++)
    ans = min(ans, a[i + n - k - 1] - a[i]);
  cout << ans << endl;
}
