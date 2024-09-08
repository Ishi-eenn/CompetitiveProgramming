#include <bits/stdc++.h>
using namespace std;

#define N 8

int main() {
  vector<int> s(N);

  for(auto& e : s) {
    cin >> e;
    if (e % 25 != 0) {
      cout << "No" << endl;
      return 0;
    }
  }

  for(int i = 1; i < N; i++) {
    if(s[i - 1] > s[i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  sort(s.begin(), s.end());
  if(s[0] < 100 || s[N - 1] > 675) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
}
