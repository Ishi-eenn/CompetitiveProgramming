#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, c, d, sum = 0;
  cin >> a >> b >> c >> d;

  long long red = 0, blue = a;

  for(int i = 1; i <= a; i++){
    blue += b;
    red += c;
    if(blue <= d * red){
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}
