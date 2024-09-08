#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, k, x;
  cin >> n >> k >> x;
  vector<ll> a(n);
  for(auto &e : a) cin >> e;

  a.insert(a.begin() + k, x);
  for(auto e : a) cout << e << " ";
}
