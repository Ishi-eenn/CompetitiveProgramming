#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, t;

  cin >> n >> t;

  vector<int> a(t);
  for (int i = 0; i < t; ++i) {
    cin >> a[i];
    --a[i];
  }

  vector<int> row(n, 0), col(n, 0), diag(2, 0);

  for (int i = 0; i < t; ++i) {
    int x = a[i] / n, y = a[i] % n;

    row[x] += 1;
    if (row[x] == n) {
      cout << i + 1 << endl;
      return 0;
    }

    col[y] += 1;
    if (col[y] == n) {
      cout << i + 1 << endl;
      return 0;
    }

    if (x == y) {
      diag[0] += 1;
      if (diag[0] == n) {
        cout << i + 1 << endl;
        return 0;
      }
    }

    if (x + y == n - 1) {
      diag[1] += 1;
      if (diag[1] == n) {
        cout << i + 1 << endl;
        return 0;
      }
    }
  }

  cout << -1 << endl;
  return 0;
}
