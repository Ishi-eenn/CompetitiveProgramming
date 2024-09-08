#include <bits/stdc++.h>
using namespace std;

int main() {
  long long p, tmp = 1, cnt = 0;
  cin >> p;

  vector<long long> coins(10);
  for(int i = 1; i <= 10; i++) {
    tmp *= i;
    coins[i - 1] = tmp;
  }

  while(p > 0) {
    for(int i = 9; i >= 0; i--) {
      if(p >= coins[i]) {
        p -= coins[i];
        cnt++;
        break;
      }
    }
  }
  cout << cnt << endl;
}
