#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, a;
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a % k == 0)
      cout << a / k << " ";
  }
}
