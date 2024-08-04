#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n), b;
  for(auto &e : a) cin >> e;

  b = a;

  sort(b.begin(), b.end());

  for(int i = 0; i < n; i++)
    if(a[i] == b[n - 2])
      cout << i + 1 << endl;
}
