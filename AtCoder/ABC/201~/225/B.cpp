#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> cnt(n + 1);
  for(ll i = 1; i < n; i++) {
    ll a, b;
    cin >> a >> b;
    cnt[a]++;
    cnt[b]++;
  }

  for(ll i = 1; i <= n; i++)
    if(cnt[i] == n - 1) {
      cout << "Yes" << endl;
      return 0;
    }

  cout << "No" << endl;
}
