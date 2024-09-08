#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> s(4);
  for (auto &e : s) cin >> e;
  map<string, int> mp;
  mp["H"] = 0;
  mp["2B"] = 0;
  mp["3B"] = 0;
  mp["HR"] = 0;

  for(auto &e : s) mp[e]++;

  for(auto &e : mp) {
    if (e.second != 1) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
