#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, cnt = 0;
  cin >> n;
  vector<string> s(n);
  for(auto &e : s) cin >> e;

  for(auto &e : s)
    if(e == "Takahashi")
      cnt++;

  cout << cnt << endl;
}
