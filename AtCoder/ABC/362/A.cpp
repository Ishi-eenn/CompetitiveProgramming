#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, g, b;

  cin >> r >> g >> b;
  string s;

  cin >> s;

  if (s == "Blue")
    cout << (r > g ? g : r);
  else if(s == "Green")
    cout << (r > b ? b : r);
  else
    cout << (g > b ? b : g);
  cout << endl;

  return 0;
}
