#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> calculate_distances(vector<ll> &v, ll n, ll d){
  sort(v.begin(), v.end());
  ll x = v[0], tmp = 0;
  for(ll i = 0; i < n; i++)
    tmp += (v[i] - x);

  while(tmp < d){
    x--;
    tmp += n;
  }

  ll left = 0, right = n, nxt = 0;
  vector<ll> ans;
  while (true){
    if(tmp <= d)
      ans.push_back(tmp);
    else if(nxt == n)
      break;

    while (nxt < n && x == v[nxt]){
      nxt++;
      right--;
      left++;
    }
    x++;
    tmp += left - right;
  }
  return ans;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, d, ans = 0;
  cin >> n >> d;

  vector<ll> x(n), y(n);
  for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

  vector<ll> a = calculate_distances(x, n, d), b = calculate_distances(y, n, d);
  sort(b.begin(), b.end());

  for (ll a : a) {
    auto iter = lower_bound(b.begin(), b.end(), d-a+1);
    ans += distance(b.begin(), iter);
  }

  cout << ans << endl;
}
