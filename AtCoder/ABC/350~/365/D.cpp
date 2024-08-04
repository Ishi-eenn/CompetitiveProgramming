#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  vector<vector<int>> dp(n + 1, vector<int>(3, 0));

  for (int i = 0; i < n; ++i) {
    if (s[i] == 'R') {
      dp[i + 1][0] = max(dp[i][1], dp[i][2]);
      dp[i + 1][2] = max(dp[i][1], dp[i][0]) + 1;
    } else if (s[i] == 'S') {
      dp[i + 1][1] = max(dp[i][2], dp[i][0]);
      dp[i + 1][0] = max(dp[i][2], dp[i][1]) + 1;
    } else if (s[i] == 'P') {
      dp[i + 1][2] = max(dp[i][0], dp[i][1]);
      dp[i + 1][1] = max(dp[i][0], dp[i][2]) + 1;
    }
  }

  cout << *max_element(dp[n].begin(), dp[n].end()) << endl;
  return 0;
}
