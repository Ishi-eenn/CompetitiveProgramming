#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& str, int start, int end) {
  while (start < end) {
    if (str[start] != str[end])
      return false;
    start++;
    end--;
  }
  return true;
}

bool containsPalindromeOfLengthK(const string& str, int K) {
  int n = str.length();
  if (K > n) return false;

  for (int i = 0; i <= n - K; i++)
    if (isPalindrome(str, i, i + K - 1))
      return true;
  return false;
}

int main() {
  int n, k, cnt = 0;
  vector<string> v;
  cin >> n >> k;

  string s;
  cin >> s;

  sort(s.begin(), s.end());
  do {
    v.push_back(s);
    cnt++;
  } while (next_permutation(s.begin(), s.end()));

  for(auto &x : v)
    if (containsPalindromeOfLengthK(x, k))
      cnt--;

  cout << cnt << endl;

  return 0;
}
