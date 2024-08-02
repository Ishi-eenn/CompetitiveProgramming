#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b;
  for(auto &e : a) cin >> e;

  b = a;
  sort(b.begin(), b.end());
  reverse(b.begin(), b.end());

  for(int i = 0; i < n; i++) {
    if(a[i] == b[1]) {
      cout << i + 1 << endl;
      return 0;
    }
  }
}
