#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, cnt = 0;
  cin >> n;

  vector<ll> a(n);
  for(auto &e : a) cin >> e;

  for(int i = 0; i < n; i++)
    for(int j = i + 1; j < n; j++)
      for(int k = j + 1; k < n; k++)
        for(int l = k + 1; l < n; l++)
          for(int m = l + 1; m < n; m++)
            if(a[i] + a[j] + a[k] + a[l] + a[m] == 1000)
              cnt++;

  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
