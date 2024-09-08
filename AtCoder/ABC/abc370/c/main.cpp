#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

struct state {
  string s;
  vector<string> path;
  ll diff;

  bool operator<(const state& other) const {
    if (diff != other.diff)
      return diff > other.diff;
    if (path.size() != other.path.size())
      return path.size() > other.path.size();
    return s > other.s;
  }
};

ll count_diff(const string& s1, const string& s2) {
  ll count = 0;
  for (ll i = 0; i < s1.length(); ++i)
    if (s1[i] != s2[i]) count++;
  return count;
}

vector<string> solve_transformation(string s, string t) {
  priority_queue<state> pq;
  unordered_set<string> visited;

  ll initial_diff = count_diff(s, t);
  pq.push({s, {}, initial_diff});
  visited.insert(s);

  while (!pq.empty()) {
    state current = pq.top();
    pq.pop();

    if (current.s == t)
      return current.path;

    for (ll i = 0; i < s.length(); i++) {
      if (current.s[i] != t[i]) {
        string next = current.s;
        next[i] = t[i];

        if (visited.find(next) == visited.end()) {
          visited.insert(next);
          vector<string> new_path = current.path;
          new_path.push_back(next);
          ll new_diff = count_diff(next, t);
          pq.push({next, new_path, new_diff});
        }
      }
    }
  }

  return {};
}

void solve() {
  string s, t;
  cin >> s >> t;

  vector<string> result = solve_transformation(s, t);

  cout << result.size() << endl;
  for (const string& str : result)
    cout << str << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
