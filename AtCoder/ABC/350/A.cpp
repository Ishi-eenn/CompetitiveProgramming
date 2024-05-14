#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int n = atoi(&s[3]);

  if (n == 316 || n >= 350 || n < 1)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
}
