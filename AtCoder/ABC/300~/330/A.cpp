#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l, cnt = 0;
  cin >> n >> l;
  vector<int> a(n);
  for(auto &e : a) cin >> e;

  for(auto &e : a)
    if(e >= l)
      cnt++;

  cout << cnt << endl;
}
