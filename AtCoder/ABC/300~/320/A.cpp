#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, c, d;
  cin >> a >> b;
  c = pow(a, b);
  d = pow(b, a);
  cout << c + d << endl;
}
