#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, cnt;
  cin >> n;
  string s;
  cin >> s;

  cnt = s.find("1");
  cout << (cnt % 2 == 0 ? "Takahashi" : "Aoki") << endl;
}


