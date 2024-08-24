#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(auto &e : a)
    cin >> e;

  ll operations = 0;
  priority_queue<ll> pq;

  for(const auto &e : a)
    if(e > 0) pq.push(e);

  while(pq.size() > 1) {
    ll first = pq.top(); pq.pop();
    ll second = pq.top(); pq.pop();

    first--;
    second--;

    if(first > 0) pq.push(first);
    if(second > 0) pq.push(second);

    operations++;
  }

  cout << operations << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
