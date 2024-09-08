#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, t, a, win;
  cin >> n >> t >> a;

  if(t == a) {
    cout << "No" << endl;
    return 0;
  } else if(t > a)
    win = t;
  else
    win = a;

  if(n / 2 < win)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
