#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k, sum = 0, j = 0;
  cin >> n >> k;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  j = k;
  for (int i = 0; i < n; i++){
    if (a[i] > j) {
      sum++;
      j = k;
    }
    j -= a[i];
  }
  cout << sum + 1 << endl;
}
