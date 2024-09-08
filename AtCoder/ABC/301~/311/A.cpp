#include <bits/stdc++.h>
using namespace std;

bool isCheck(vector<int>& a) {
  for (int i = 0; i < 3; i++)
    if (a[i] == 0) return false;
  return true;
}

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  vector<int> a(3);
  for (int i = 0; i < n; i++) {
    a[s[i] - 'A']++;
    if (isCheck(a)) {
      cout << i + 1 << endl;
      return 0;
    }
  }
}
