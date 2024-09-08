#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;
    vector<long long> a(n), b(q), k(q);
    for (auto &e : a) cin >> e;
    for (long long i = 0; i < q; i++) cin >> b[i] >> k[i];

    sort(a.begin(), a.end());

    vector<long long> prefixSum(n);
    prefixSum[0] = a[0];
    for (long long i = 1; i < n; i++)
      prefixSum[i] = prefixSum[i - 1] + a[i];

    for (long long i = 0; i < q; i++) {
      long long x = b[i], count = k[i];
      auto it = lower_bound(a.begin(), a.end(), x);
      long long index = distance(a.begin(), it);

      long long result = 0;
        if (index < n) {
          long long sumRight = (index < n) ? prefixSum[n - 1] - ((index > 0) ? prefixSum[index - 1] : 0) : 0;
          long long countRight = n - index;
          result += sumRight - (countRight * x);
        }
        if (index > 0) {
          long long sumLeft = (index > 0) ? prefixSum[index - 1] : 0;
          long long countLeft = index;
          result += (countLeft * x) - sumLeft;
        }
        cout << result << endl;
    }

    return 0;
}
