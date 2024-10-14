#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

ll get_cost(ll w, ll a, ll b, ll p, ll q) {
  ll min_cost = LLONG_MAX;

  if(a > 0) {
    ll x_max = w / a;
    for(ll x = x_max; x <= x_max + 1; x++) {
      if(x < 0)
        continue;
      ll y = (w > x * a) ? ((w - x * a + b - 1) / b) : 0;
      ll cost = x * p + y * q;
      min_cost = min(min_cost, cost);
    }
  }

  if(b > 0) {
    ll y_max = w / b;
    for(ll y = y_max; y <= y_max + 1; y++) {
      if(y < 0)
        continue;
      ll x = (w > y * b) ? ((w - y * b + a - 1) / a) : 0;
      ll cost = x * p + y * q;

      min_cost = min(min_cost, cost);
    }
  }

  return min_cost;
}

bool capacity(ll w, ll budget, const vector<ll>& a, const vector<ll>& b, const vector<ll>& p, const vector<ll>& q) {
  ll total = 0;

  for(int i = 0; i < a.size(); i++){
    ll cost = get_cost(w, a[i], b[i], p[i], q[i]);

    if(cost == LLONG_MAX)
      return false;

    total += cost;
    if(total > budget)
      return false;
  }
  return true;
}

ll maximum_capacity(ll n, ll budget, const vector<ll>& a, const vector<ll>& b, const vector<ll>& p, const vector<ll>& q) {
  ll ans = 0, left = 0, right = 1e12;

  while(left < right){
    ll mid = left + (right - left) / 2 + 1;
    if(capacity(mid, budget, a, b, p, q)) {
      ans = mid;
      left = mid + 1;
    }
    else
      right = mid - 1;
  }
  return ans;
}

void solve() {
  ll n, budget;
  cin >> n >> budget;

  vector<ll> a(n), b(n), p(n), q(n);
  for(int i = 0; i < n; i++) cin >> a[i] >> p[i] >> b[i] >> q[i];

  cout << maximum_capacity(n, budget, a, b, p, q) << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
