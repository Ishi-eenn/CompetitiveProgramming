#include <bits/stdc++.h>
using namespace std;

// int main(){
//   int n;
//   cin >> n;

//   vector<int> a(n * 3);
//   for (int i = 0; i < 3 * n; i++){
//     cin >> a[i];
//   }

//   vector<vector<int>> ps(n + 1);
//   for (int i = 0; i < 3 * n; i++){
//     ps[a[i]].push_back(i);
//   }

//   vector<int> ans(n);
//   iota(ans.begin(), ans.end(), 1);
//   sort(ans.begin(), ans.end(), [&](int x, int y){
//     return ps[x][1] < ps[y][1];
//   });

//   for (int i = 0; i < n; i++)
//     cout << ans[i] << " ";
//   cout << endl;
// }

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
