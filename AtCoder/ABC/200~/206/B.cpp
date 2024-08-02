#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, ans = 0;
  cin >> n;

  for(long long i = 1; i <= n; i++) {
    ans += i;
    if(ans >= n) {
      cout << i << endl;
      return 0;
    }
  }
}
