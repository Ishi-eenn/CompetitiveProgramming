#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 文字列に長さKの回文が含まれているかをチェックする。
 *
 * 与えられた文字列の中に、指定された長さKの回文が含まれているかどうかを確認。
 *
 * @param str チェックする入力文字列。
 * @param K チェックする回文の長さ。
 * @return 長さKの回文が含まれていればtrue、そうでなければfalseを返す。
 */
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

/**
 * @brief 文字列全体が回文かどうかをチェックする。
 *
 * 与えられた文字列全体が回文かどうかを確認
 *
 * @param str チェックする入力文字列。
 * @return 文字列全体が回文であればtrue、そうでなければfalseを返す。
 */
bool isPalindrome(const string& str) {
    return hasPalindromeSubstring(str, str.length());
}

/**
 * @brief 文字列の部分文字列から回文を生成する。
 *
 * 指定された開始インデックスと終了インデックスの間の部分文字列を使って回文を生成
 *
 * @param str 入力文字列。
 * @param start 部分文字列の開始インデックス。
 * @param end 部分文字列の終了インデックス。
 * @return 部分文字列を使って生成された回文。
 */
string generatePalindrome(const string& str, int start, int end) {
  string palindrome = str.substr(start, end - start + 1);
  for (int i = end - start; i >= 0; --i)
    palindrome += str[start + i];

  return palindrome;
}

/**
 * @brief 文字列内の回文の数をカウントする。
 *
 * 与えられた文字列の中に含まれる回文の数をカウント
 *
 * @param str 入力文字列。
 * @return 文字列内の回文の数。
 */
int countPalindromes(const string& str) {
  int n = str.length();
  int count = 0;

  for (int center = 0; center < 2 * n - 1; center++) {
    int left = center / 2;
    int right = left + center % 2;
    while (left >= 0 && right < n && str[left] == str[right]) {
      count++;
      left--;
      right++;
    }
  }

  return count;
}

/**
 * @brief 文字列内のすべての回文をリストにして返す。
 *
 *　与えられた文字列の中に含まれるすべての回文をリストにして返します。
 *
 * @param str 入力文字列。
 * @return 文字列内のすべての回文を含むリスト。
 */
vector<string> listAllPalindromes(const string& str) {
  int n = str.length();
  vector<string> palindromes;

  for (int center = 0; center < 2 * n - 1; center++) {
    int left = center / 2;
    int right = left + center % 2;
    while (left >= 0 && right < n && str[left] == str[right]) {
      palindromes.push_back(str.substr(left, right - left + 1));
      left--;
      right++;
    }
  }

  return palindromes;
}

/**
 * @brief 文字列中の最長回文部分文字列を見つける。
 *
 * 与えられた文字列の中で最長の回文部分文字列を見つける
 *
 * @param str 入力文字列。
 * @return 最長の回文部分文字列。
 */
string longestPalindromeSubstring(const string& str) {
  int n = str.length();
  if (n == 0) return "";

  int longestBegin = 0;
  int maxLen = 1;
  bool table[1000][1000] = {false};

  for (int i = 0; i < n; i++) {
    table[i][i] = true;
  }

  for (int i = 0; i < n-1; i++) {
    if (str[i] == str[i+1]) {
      table[i][i+1] = true;
      longestBegin = i;
      maxLen = 2;
    }
  }

  for (int len = 3; len <= n; len++) {
    for (int i = 0; i < n-len+1; i++) {
      int j = i+len-1;
      if (str[i] == str[j] && table[i+1][j-1]) {
        table[i][j] = true;
        longestBegin = i;
        maxLen = len;
      }
    }
  }

  return str.substr(longestBegin, maxLen);
}
