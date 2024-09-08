#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll a, b;
  cin >> a >> b;

  while(a > 0 && b > 0) {
    if(a % 10 + b % 10 >= 10) {
      cout << "Hard" << endl;
      return 0;
    }
    a /= 10;
    b /= 10;
  }

  cout << "Easy" << endl;
}
