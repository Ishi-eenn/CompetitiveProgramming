#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;

  cin >> n >> m;

  vector<int> a(n), b(m);

  for (auto& x : a)
    cin >> x;
  for (auto& x : b)
    cin >> x;

  auto c = a;

  for (auto x : b)
    c.push_back(x);

  sort(c.begin(), c.end());

  set<int> st(a.begin(), a.end());

  for (int i = 0; i < n + m - 1; ++i) {
      if (st.contains(c[i]) && st.contains(c[i + 1])) {
          cout << "Yes" << endl;
          return 0;
      }
  }
  cout << "No" << endl;
}
