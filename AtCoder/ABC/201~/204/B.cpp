#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 0;
  cin >> n;
  vector<int> a(n);
  for (auto &e : a) cin >> e;

  for(auto &e : a)
    if(e > 10)
      ans += e - 10;

  cout << ans << endl;
}
