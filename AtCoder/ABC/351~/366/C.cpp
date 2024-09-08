#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll q;
  cin >> q;

  map<ll, ll> mp;

  for(ll i = 0; i < q; i++) {
    ll n;
    cin >> n;
    if(n == 1) {
      ll x;
      cin >> x;
      mp[x]++;
    } else if(n == 2) {
      ll x;
      cin >> x;
      mp[x]--;
      if(mp[x] == 0)
        mp.erase(x);
    } else
      cout << mp.size() << endl;
  }
}
