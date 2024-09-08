#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  cin >> n;
  map<string, int> mp;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s >> t;
    mp[s] = t;
  }

  vector<pair<string, int>> v(mp.begin(), mp.end());
  sort(v.begin(), v.end(), [](auto a, auto b) { return a.second > b.second; });
  cout << v[1].first << endl;
}
