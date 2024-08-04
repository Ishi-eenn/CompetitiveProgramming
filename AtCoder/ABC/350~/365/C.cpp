#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m, cnt = 0;
  cin >> n >> m;
  vector<ll> a(n);
  for(auto &e : a) {
    cin >> e;
    cnt += e;
  }

  if(cnt <= m) {
    cout << "infinite" << endl;
    return 0;
  }

  cnt = 0;
  for(ll i = m / n; cnt <= m; i++) {
    cnt = 0;
    for(auto &e : a) {
      if(e <= i)
        cnt += e;
      else
        cnt += i;
    }

    if(cnt > m) {
      cout << i - 1 << endl;
      return 0;
    }
  }
}
