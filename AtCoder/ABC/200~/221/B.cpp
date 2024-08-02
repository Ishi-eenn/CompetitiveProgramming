#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  if(s == t) {
    cout << "Yes" << endl;
    return 0;
  }

  for(int i = 0; i < s.size() - 1; i++) {
    string u = s;
    swap(u[i], u[i + 1]);
    if(u == t) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}
