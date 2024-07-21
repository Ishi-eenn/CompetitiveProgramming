#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, cnt = 0;
  cin >> n >> m;
  vector<int> h(n);
  for(auto &e : h) cin >> e;

  for(auto &e : h) {
    if(m >= e)
      cnt++;
    m -= e;
  }
  cout << cnt << endl;
}
