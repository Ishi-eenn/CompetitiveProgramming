#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 文字列の特定の部分が回文であるかどうかを判定する関数
 *
 * 指定された開始インデックスと終了インデックスの間の部分文字列が回文かどうかをチェックする。
 *
 * @param str チェックする入力文字列
 * @param start 部分文字列の開始インデックス
 * @param end 部分文字列の終了インデックス
 * @return 部分文字列が回文であればtrue、そうでなければfalseを返す
 */

bool isSubstringPalindrome(const string& str, int start, int end) {
  while (start < end) {
    if (str[start] != str[end])
      return false;
    start++;
    end--;
  }
  return true;
}


/**
 * @brief 文字列に長さKの回文が含まれているかをチェックする。
 *
 * 与えられた文字列の中に、指定された長さKの回文が含まれているかどうかを確認。
 *
 * @param str チェックする入力文字列。
 * @param K チェックする回文の長さ。
 * @return 長さKの回文が含まれていればtrue、そうでなければfalseを返す。
 */
bool containsPalindromeOfLengthK(const string& str, int K) {
  int n = str.length();
  if (K > n) return false;

  for (int i = 0; i <= n - K; i++) {
    if (isSubstringPalindrome(str, i, i + K - 1)) {
      return true;
    }
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
  return isSubstringPalindrome(str, 0, str.length() - 1);
}
