#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  map<char, int> moji;
  for (char c:s)
    moji[c]++;

  for(int i = 0; i < s.size(); i++)
    moji[s[i]]++;

  int ma;
  for(int i = 'a'; i <= 'z'; i++)
    ma = max(ma, moji[i]);

  for (int i = 1; i <= ma; i++) {
    int sum = 0;
    for (int j = 'a'; j <= 'z'; j++) {
      if (moji[j] == i)
        sum++;
    }
    if (sum != 0 && sum != 2) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
