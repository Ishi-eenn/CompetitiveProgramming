#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, sum = 0, cnt = 0;;
  cin >> h;

  while (h >= sum) {
    sum += pow(2, cnt);
    cnt++;
  }
  cout << cnt << endl;
}
