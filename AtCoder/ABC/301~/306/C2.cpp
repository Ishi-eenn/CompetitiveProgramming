#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<int> a(n * 3);
  for (int i = 0; i < 3 * n; i++){
    cin >> a[i];
  }

  vector<int> cnt(n + 1);
  vector<int> ans;
  for (int i = 0; i < 3 * n; i++){
    cnt[a[i]]++;
    if (cnt[a[i]] == 2){
      ans.push_back(a[i]);
    }
  }

  for (int i = 0; i < n; i++)
    cout << ans[i] << " ";
  cout << endl;
}
