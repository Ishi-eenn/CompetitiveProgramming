// #include <bits/stdc++.h>
// using namespace std;

// int main() {
  string s, target = "aiueo";
  cin >> s;

  for(auto &c : s)
    if(target.find(c) == string::npos)
      cout << c;
}
