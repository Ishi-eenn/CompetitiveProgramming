#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;

  cin >> n >> k;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int left = 1, right = 1000000000;
  while (left < right) {
    int mid = (left + right) / 2;

    long long sum = 0;
    for (int i = 0; i < n; i++)
      sum += mid / a[i];

    if (sum < k)
      left = mid + 1;
    else
      right = mid;
  }

  cout << left << endl;
}
