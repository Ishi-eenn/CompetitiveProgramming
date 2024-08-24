#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

const ll MAX = 200005;

ll tmp, result;
vector<ll> tree[MAX];
vector<bool> check(MAX, false), find_tree(MAX, false);
map<ll, bool> m;

void dfs(ll idx, vector<ll> save) {
  if (find_tree[idx] == true) {
    ll save_size = save.size();

    for (ll i = 0; i < save_size; i++) {
      if (m.find(save[i]) == m.end()) {
        m.insert({save[i], true});
        result++;
      }
    }

    save.clear();
  }

  ll tree_size = tree[idx].size();
  check[idx] = true;

  for (ll i = 0; i < tree_size; i++) {
    if (check[tree[idx][i]] == false) {
      vector<ll> tmp = save;
      tmp.push_back(tree[idx][i]);
      dfs(tree[idx][i], tmp);
    }
  }
}

void solve() {
  ll n, k;
  cin >> n >> k;

  for (ll i = 0; i < n - 1; i++) {
      ll a, b;
      cin >> a >> b;

      tree[a].push_back(b);
      tree[b].push_back(a);
  }

  for (ll i = 0; i < k; i++) {
    cin >> tmp;

    find_tree[tmp] = true;
  }

  dfs(tmp, {tmp});

  cout << result << endl;;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
