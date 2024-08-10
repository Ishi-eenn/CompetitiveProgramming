#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  set<vector<ll>> s;
  for(ll i = 0; i < n; i++) {
    ll l;
    cin >> l;
    vector<ll> v(l);
    for(auto &e : v) cin >> e;

    s.insert(v);
  }

  cout << s.size() << endl;
}
