#include <bits/stdc++.h>
using namespace std;

int main() {
  int M, D, y, m, d;
  cin >> M >> D >> y >> m >> d;
  d++;

  if(D < d) {
    m++;
    d = 1;
  }

  if(M < m) {
    y++;
    m = 1;
  }

  cout << y << " " << m << " " << d << endl;
}
