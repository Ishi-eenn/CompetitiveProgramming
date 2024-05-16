#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, a;
  cin >> n >> k;

  set<int> st;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a <= k)
      st.insert(a);
  }

  long long diff = 0;
  for (auto itr = st.begin(); itr != st.end(); ++itr)
      diff += *itr;

  long long sum = (long long)(1 + k) * k / 2;
  cout << sum - diff  << endl;
}
