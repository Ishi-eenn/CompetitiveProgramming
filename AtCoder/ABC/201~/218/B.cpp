#include <bits/stdc++.h>
using namespace std;

int main() {
  const int n = 26;
  vector<int> p(n);
  for(auto &e : p) cin >> e;

  for(auto e : p)
    cout << (char)(e - 1 + 'a');
}
