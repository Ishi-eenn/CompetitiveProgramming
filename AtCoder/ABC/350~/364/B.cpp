#include <bits/stdc++.h>
using namespace std;

int main() {
  long long h, w, s_i, s_j;
  cin >> h >> w;
  cin >> s_i >> s_j;
  s_i--;
  s_j--;

  vector<string> c(h);
  for(auto &e: c) cin >> e;

  string x;
  cin >> x;

  for(char move : x) {
    if(move == 'U' && s_i > 0 && c[s_i - 1][s_j] != '#') {
      s_i--;
    } else if(move == 'D' && s_i < h - 1 && c[s_i + 1][s_j] != '#') {
      s_i++;
    } else if(move == 'L' && s_j > 0 && c[s_i][s_j - 1] != '#') {
      s_j--;
    } else if(move == 'R' && s_j < w - 1 && c[s_i][s_j + 1] != '#') {
      s_j++;
    }
  }

  cout << s_i + 1 << " " << s_j + 1 << endl;
}
