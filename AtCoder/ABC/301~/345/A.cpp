#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  bool flag = true;
  if (s[0] != '<')
    flag = false;
  if (s[s.size() - 1] != '>')
    flag = false;

  for (int i = 1; i < s.size() - 1; i++)
    if (s[i] != '=')
      flag = false;

  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
