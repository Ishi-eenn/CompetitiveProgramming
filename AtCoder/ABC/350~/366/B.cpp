#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<string> strings(n);
  for(auto &s : strings)
    cin >> s;

  size_t maxLength = 0;
  for (const auto& str : strings)
    maxLength = std::max(maxLength, str.length());

  for (size_t i = 0; i < maxLength; ++i) {
    string line;
    for (int j = strings.size() - 1; j >= 0; --j) {
      if (i < strings[j].length())
        line += strings[j][i];
      else if (j != 0)
        line += '*';
    }
    while (!line.empty() && line.back() == '*')
      line.pop_back();
    cout << line << endl;
  }
  return 0;
}
