#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, cnt = 0;
  cin >> n;

  while(n / 2 != 0) {
    n /= 2;
    cnt++;
  }

  cout << cnt << endl;
}
