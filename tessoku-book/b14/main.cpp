#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

vector<ll> Enumerate(vector<ll> a) {
  vector<ll> SumList;
  for (ll i = 0; i < (1 << a.size()); i++) {
    ll sum = 0;

    for (ll j = 0; j < a.size(); j++) {
      ll wari = (1 << j);

      if ((i / wari) % 2 == 1)
        sum += a[j];
    }
    SumList.push_back(sum);
  }
  return SumList;
}

void solve() {
  ll n, k;
  cin >> n >> k;

  vector<ll> a(n + 1);
  for (ll i = 1; i <= n; i++) cin >> a[i];

  vector<ll> l1, l2;
  for (ll i = 1; i <= n / 2; i++)
    l1.push_back(a[i]);
  for (ll i = n / 2 + 1; i <= n; i++)
    l2.push_back(a[i]);

  vector<ll> sum1 = Enumerate(l1);
  vector<ll> sum2 = Enumerate(l2);
  sort(sum1.begin(), sum1.end());
  sort(sum2.begin(), sum2.end());

  for (ll i = 0; i < sum1.size(); i++) {
    ll pos = lower_bound(sum2.begin(), sum2.end(), k - sum1[i]) - sum2.begin();
    if (pos < sum2.size() && sum2[pos] == k - sum1[i]) {
      cout << "Yes" << endl;
      return ;
    }
  }
  cout << "No" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
