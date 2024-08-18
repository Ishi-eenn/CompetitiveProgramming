#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

struct Interval {
  string start;
  string end;
};

bool compareIntervals(const Interval &a, const Interval &b) {
  return a.start != b.start ? a.start < b.start : a.end < b.end;
}

void solve() {
  ll numIntervals;
  cin >> numIntervals;

  vector<Interval> intervals(numIntervals);
  for (ll i = 0; i < numIntervals; ++i) {
    string rawInterval;
    cin >> rawInterval;

    intervals[i].start = rawInterval.substr(0, 4);
    intervals[i].end = rawInterval.substr(5, 4);
    intervals[i].start[3] = (intervals[i].start[3] >= '5') ? '5' : '0';

    if (intervals[i].end[3] > '5') {
      intervals[i].end[3] = '0';
      intervals[i].end[2]++;
    } else if (intervals[i].end[3] != '0')
      intervals[i].end[3] = '5';

    if (intervals[i].end[2] == '6') {
      intervals[i].end[2] = intervals[i].end[3] = '0';
      if (intervals[i].end[1] == '9') {
        intervals[i].end[1] = '0';
        intervals[i].end[0]++;
      } else
        intervals[i].end[1]++;
    }
  }

  sort(intervals.begin(), intervals.end(), compareIntervals);

  vector<Interval> mergedIntervals;
  mergedIntervals.push_back(intervals[0]);

  for (int i = 1; i < numIntervals; ++i) {
    if (intervals[i].start <= mergedIntervals.back().end)
      mergedIntervals.back().end = max(mergedIntervals.back().end, intervals[i].end);
    else
      mergedIntervals.push_back(intervals[i]);
  }

  for (const auto &interval : mergedIntervals)
    cout << interval.start << "-" << interval.end << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
