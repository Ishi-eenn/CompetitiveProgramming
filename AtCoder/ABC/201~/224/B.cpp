#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<int>> a(h, vector<int>(w));
  for(int i = 0; i < h; i++)
    for(int j = 0; j < w; j++)
      cin >> a[i][j];

  for(int i = 0; i < h; i++)
    for(int j = i + 1; j < h; j++)
      for(int k = 0; k < w; k++)
        for(int l = k + 1; l < w; l++) {
          if(a[i][k] + a[j][l] > a[j][k] + a[i][l]){
            cout << "No" << endl;
            return 0;
          }
        }

  cout << "Yes" << endl;
}
