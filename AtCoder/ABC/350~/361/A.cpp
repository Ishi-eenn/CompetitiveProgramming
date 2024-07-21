#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, x;
  cin >> n >> k >> x;
  vector<int> a(n);
  for(auto &e : a) cin >> e;

  a.insert(a.begin() + k, x);
  for(auto &e : a)
    cout << e << " ";
}
