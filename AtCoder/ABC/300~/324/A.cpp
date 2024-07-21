#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto &e: a) cin >> e;

  sort(a.begin(), a.end());
  cout << (a[0] == a[n - 1] ? "Yes" : "No") << endl;
}
