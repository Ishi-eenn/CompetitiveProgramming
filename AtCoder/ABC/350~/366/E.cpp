#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, d;
  cin >> n >> d;

  vector<ll> x(n), y(n);
  for (ll i = 0; i < n; i++)
    cin >> x[i] >> y[i];

  nth_element(x.begin(), x.begin() + n / 2, x.end());
  nth_element(y.begin(), y.begin() + n / 2, y.end());
  ll median_x = x[n / 2];
  ll median_y = y[n / 2];

  ll count = 0;
  for (ll xi = median_x - d; xi <= median_x + d; xi++) {
    for (ll yi = median_y - d; yi <= median_y + d; yi++) {
      ll total_distance = 0;
      for (ll i = 0; i < n; i++)
        total_distance += abs(xi - x[i]) + abs(yi - y[i]);

      if (total_distance <= d)
        count++;
    }
  }

  cout << count << endl;
}

