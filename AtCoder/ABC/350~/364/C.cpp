#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, x, y, sum_a = 0, sum_b = 0, cnt_a = 0, cnt_b = 0;
  cin >> n >> x >> y;

  vector<long long> a(n), b(n);
  for(auto &e: a) cin >> e;
  for(auto &e: b) cin >> e;

  sort(a.begin(), a.end(), greater<long long>());
  sort(b.begin(), b.end(), greater<long long>());

  for(auto &e: a) {
    if(sum_a <= x) {
      sum_a += e;
      cnt_a++;
    } else {
      break;
    }
  }
  for(auto &e: b) {
    if(sum_b <= y) {
      sum_b += e;
      cnt_b++;
    } else {
      break;
    }
  }

  if(cnt_a <= cnt_b)
    cout << cnt_a << endl;
  else
    cout << cnt_b << endl;
}
