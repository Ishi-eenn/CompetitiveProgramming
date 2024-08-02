#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> number(4), tmp;
  for (int i = 0; i < 4; i++)
    number[i] = s[i] - '0';

  tmp = number;
  sort(tmp.begin(), tmp.end());
  if(tmp[0] == tmp[3]) {
    cout << "Weak" << endl;
    return 0;
  }

  for(int i = 0; i < 3; i++) {
    if ((number[i] + 1) % 10 != number[i + 1]) {
      cout << "Strong" << endl;
      return 0;
    }
  }
  cout << "Weak" << endl;
}
