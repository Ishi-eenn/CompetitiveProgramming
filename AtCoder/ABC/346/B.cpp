#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, b;
  cin >> w >> b;

  string s = "wbwbwwbwbwbw";

  for (int i = 0; i < s.size(); i++) {
    int cnt_w = 0, cnt_b = 0;
    for (int j = 0; j < w + b; j++) {
      int n = (i + j) % s.size();
      if (s[n] == 'w')
        cnt_w++;
      else
        cnt_b++;
    }
    if (cnt_w == w && cnt_b == b) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
