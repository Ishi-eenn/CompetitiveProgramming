#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto &e : a) cin >> e;

  sort(a.begin(), a.end());
  for(int i = 1; i <= n; i++)
    if(a[i - 1] != i){
      cout << "No" << endl;
      return 0;
    }
  cout << "Yes" << endl;
}
