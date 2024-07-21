#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  if(s.find("ab") == string::npos && s.find("ba") == string::npos)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
}
