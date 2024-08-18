#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

vector<int> R;
int N, K;
vector<int> current;

void generate_sequences(int index, int sum) {
  if (index == N) {
    if (sum % K == 0) {
      for (int i = 0; i < N; ++i) {
        cout << current[i] << (i == N - 1 ? "\n" : " ");
        }
    }
    return;
  }

  for (int i = 1; i <= R[index]; ++i) {
    current[index] = i;
    generate_sequences(index + 1, sum + i);
  }
}

void solve() {
  cin >> N >> K;
  R.resize(N);
  current.resize(N);

  for (int i = 0; i < N; ++i)
    cin >> R[i];

  generate_sequences(0, 0);
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t = 1;
  // cin >> t;
  while(t--)
      solve();

  return 0;
}
