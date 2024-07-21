#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<pair<int, int> > p(3);
  for (int i = 0; i < 3; i++)
    cin >> p[i].first >> p[i].second;

  int ab, bc, ac;
  ab = pow(p[1].first - p[0].first, 2) + pow(p[1].second - p[0].second, 2);
  bc = pow(p[2].first - p[1].first, 2) + pow(p[2].second - p[1].second, 2);
  ac = pow(p[2].first - p[0].first, 2) + pow(p[2].second - p[0].second, 2);

  if (ab + bc == ac || ab + ac == bc || ac + bc == ab)
    cout << "Yes";
  else
    cout << "No";
}
