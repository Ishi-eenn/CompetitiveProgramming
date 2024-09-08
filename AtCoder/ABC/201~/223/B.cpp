#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<string> ans;
  for(int i = 0; i < s.size(); i++)
    ans.push_back(s.substr(i, s.size() - i) + s.substr(0, i));

  cout << *min_element(ans.begin(), ans.end()) << endl;
  cout << *max_element(ans.begin(), ans.end()) << endl;
}

// int main() {
//   string s;
//   cin >> s;

//   string ans = s;
//   vector<string> ans_list;
//   for(int i = 0; i < s.size(); i++) {
//     ans = ans.substr(1, s.size() - 1) + ans.substr(0, 1);
//     ans_list.push_back(ans);
//   }

//   sort(ans_list.begin(), ans_list.end());

//   cout << ans_list[0] << endl;
//   cout << ans_list[ans_list.size() - 1] << endl;
// }
