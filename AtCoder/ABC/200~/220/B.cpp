#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  cin >> k;
  string a, b;
  cin >> a >> b;

  cout << stoll(a, 0, k) * stoll(b, 0, k) << endl;
}
