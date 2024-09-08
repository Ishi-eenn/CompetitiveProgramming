#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, sum = 0;
  cin >> n >> x;
  vector<int> s(n);
  for(auto &e : s) cin >> e;

  for(auto &e : s)
    if(e <= x)
      sum += e;

  cout << sum << endl;
}
