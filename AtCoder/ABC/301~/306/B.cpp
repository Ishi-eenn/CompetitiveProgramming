#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main(){
  ull ans = 0;
  for (int i = 0; i < 64; i++){
    ull a;
    cin >> a;
    ans += a << i;
  }
  cout << ans << endl;
}
