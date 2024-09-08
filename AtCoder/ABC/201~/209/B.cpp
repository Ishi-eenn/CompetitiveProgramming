#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, x, sum = 0;
  cin >> n >> x;
  vector<long long> a(n);
  for (auto &e : a) cin >> e;

  for(int i = 0; i < n; i++) {
    sum += a[i];
    if(i % 2 == 1) sum--;
  }

  cout << (sum <= x ? "Yes" : "No") << endl;
}
