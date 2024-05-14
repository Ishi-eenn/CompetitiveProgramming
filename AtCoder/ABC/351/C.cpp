#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, cnt = 0;
  cin >> n;

  vector<int> ball(n);
  for (int i = 0; i < n; i++) {
    cin >> a;
    cnt++;
    ball[cnt] = a;
    while (cnt > 1 && ball[cnt] == ball[cnt - 1]) {
      cnt--;
      ball[cnt]++;
    }
  }

  cout << cnt << endl;
}
