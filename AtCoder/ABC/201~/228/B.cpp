#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, x, i;
  cin >> n >> x;

  vector<ll> a(n);
  for(auto &e : a) cin >> e;

  map<ll, ll> mp;
  i = x;
  ll cnt = 0;
  while(1) {
    if(mp.contains(i))
      break;
    mp[i] = 1;
    i = a[i - 1];
  }

  cout << mp.size() << endl;
}
