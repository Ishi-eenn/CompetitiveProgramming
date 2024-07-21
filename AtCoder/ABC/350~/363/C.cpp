#include <bits/stdc++.h>
using namespace std;

bool hasPalindromeSubstring(const string& str, int k) {
  for (int i = 0; i < str.size() - k + 1; i++) {
    string t = str.substr(i, k);
    string rt = t;
    reverse(rt.begin(), rt.end());
    if (t == rt)
      return true;
  }
  return false;
}

int main() {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  sort(s.begin(), s.end());
  int ans = 0;
  do {
    if (!containsPalindromeOfLengthK(s, k))
      ans++;
  } while (next_permutation(s.begin(), s.end()));
  cout << ans << endl;
}

// bool isPalindrome(const string& str, int start, int end) {
//   while (start < end) {
//     if (str[start] != str[end])
//       return false;
//     start++;
//     end--;
//   }
//   return true;
// }

// int main() {
//   int n, k, cnt = 0;
//   vector<string> v;
//   cin >> n >> k;

//   string s;
//   cin >> s;

//   sort(s.begin(), s.end());
//   do {
//     v.push_back(s);
//     cnt++;
//   } while (next_permutation(s.begin(), s.end()));

//   for(auto &x : v)
//     if (containsPalindromeOfLengthK(x, k))
//       cnt--;

//   cout << cnt << endl;

//   return 0;
// }
