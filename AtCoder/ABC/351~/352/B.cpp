#include <bits/stdc++.h>
using namespace std;

int main(){
  string s, t;
  cin >> s >> t;
  int j = 0;

  for(int i = 0; i < t.size(); i++) {
    if (s[j] == t[i]) {
      cout << i + 1 << " ";
      j++;
    }
  }
  cout << endl;
}
