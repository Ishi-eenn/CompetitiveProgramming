#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, sum = 0;

  for(int i = 0; i < 9; i++) {
    cin >> a;
    sum += a;
  }

  for (int i = 0; i < 8; i++) {
    cin >> b;
    sum -= b;
  }

  cout << sum + 1 << endl;
}
