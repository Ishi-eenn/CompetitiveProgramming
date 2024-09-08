#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  if(n % 4 != 0)
    cout << 365 << endl;
  else if(n % 4 == 0 && n % 100 != 0)
    cout << 366 << endl;
  else if(n % 4 == 0 && n % 100 == 0 && n % 400 != 0)
    cout << 365 << endl;
  else
    cout << 366 << endl;
}
