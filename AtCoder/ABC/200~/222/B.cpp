#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, p, cnt = 0;
  cin >> n >> p;
  vector<long long> a(n);

  for(auto &e : a) {
    cin >> e;
    if(e < p) cnt++;
  }

  cout << cnt << endl;
}
