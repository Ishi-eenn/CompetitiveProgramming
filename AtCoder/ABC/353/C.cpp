#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  long long ans = 0, mod = 1e8, tmp;
  vector<long long> a(n);

  for(int i = 0; i < n; i++) {
    cin >> a[i];
    ans += 2 * n * a[i];
  }

  sort(a.begin(), a.end());

  for(int i = 0; i < n; i++) {
    tmp = distance(lower_bound(a.begin(), a.end(), mod - a[i]), a.end());
    ans -= tmp * mod;
    if(2 * a[i] >= mod)
       ans += mod;
    ans -= 2 * a[i];
  }

  cout <<  ans / 2 << endl;
}
