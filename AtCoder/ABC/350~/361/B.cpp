#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4;

  cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;

  if(!(x2 <= x3 || x4 <= x1) && !(y2 <= y3 || y4 <= y1) && !(z2 <= z3 || z4 <= z1))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

}
