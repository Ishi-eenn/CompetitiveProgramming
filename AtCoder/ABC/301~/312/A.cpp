#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<string> check = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
  for (auto e : check) {
    if (e == s) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}
