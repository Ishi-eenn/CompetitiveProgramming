#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int rises = s.find('R');
  int miso = s.find('M');

  if(rises < miso)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
