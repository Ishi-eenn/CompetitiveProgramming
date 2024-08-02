#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, q;
  cin >> n >> q;
  vector<long long> a(n), b(q), k(q);
  for(auto &e: a) cin >> e;
  for(long long i = 0; i < q; i++) cin >> b[i] >> k[i];

  sort(a.begin(), a.end());

  for(long long i = 0; i < q; i++) {
    long long x = b[i], count = k[i];

    auto it = lower_bound(a.begin(), a.end(), x);
    long long idx = it - a.begin(), left = idx - 1, right = idx, result = 0;
    while(count > 0) {
      if(left < 0) {
        result = a[right] - x;
        right++;
      } else if(right >= n) {
        result = x - a[left];
        left--;
      } else if(x - a[left] <= a[right] - x) {
        result = x - a[left];
        left--;
      } else {
        result = a[right] - x;
        right++;
      }
      count--;
    }

    cout << result << endl;
  }
  return 0;
}
