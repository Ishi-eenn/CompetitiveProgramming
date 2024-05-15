#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  set<string> st;
  for(int i = 0; i < s.size(); i++)
    for(int j = 1; i + j <= s.size(); j++)
      st.insert(s.substr(i, j));

  cout << st.size() << endl;
  // for (auto itr = st.begin(); itr != st.end(); ++itr)
  //   cout << *itr << endl;
}
