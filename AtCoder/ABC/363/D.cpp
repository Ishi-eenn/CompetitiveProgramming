#include <bits/stdc++.h>

using namespace std;

long long int_pow(long long base, int exp) {
  long long result = 1;
  while (exp > 0) {
    if (exp & 1) result *= base;
    base *= base;
    exp >>= 1;
  }
  return result;
}

int main() {
  long long n, prefix, length = 2, count = 9;

  cin >> n;

  if (n <= 10) {
    cout << n - 1 << endl;
    return 0;
  }

  n -= 10;

  while (n > count) {
    n -= count;
    length++;
    count = 9 * int_pow(10, (length - 1) / 2);
  }

  prefix = int_pow(10, (length - 1) / 2) + n - 1;

  string result = to_string(prefix);

  if (length % 2 == 1)
    result += string(result.rbegin() + 1, result.rend());
  else
    result += string(result.rbegin(), result.rend());

  cout << result << endl;
  return 0;
}
