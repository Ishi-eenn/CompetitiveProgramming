#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string s;
  cin >> s;

  ll miso = s.find("M");
  ll rice = s.find("R");

  if(rice < miso)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
