#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, sum = 0;
  cin >> n;

  pair <string, int> p[n];
  for (int i = 0; i < n; i++) {
    cin >> p[i].first >> p[i].second;
    sum += p[i].second;
  }

  sort(p, p + n);

  cout << p[sum % n].first << endl;
}
