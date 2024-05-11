#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, ans[10] = {};
  cin >> n;

  for (int i = 0; i < 10; i++){
    ans[i] = n % 2;
    n /= 2;
  }

  for (int i = 9; i >= 0; i--)
    cout << ans[i];
}
