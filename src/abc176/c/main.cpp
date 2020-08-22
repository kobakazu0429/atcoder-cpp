#include <bits/stdc++.h>
#define rep(i, n, init) for (int i = init, len = (n); i < len; ++i)
#define ALL(x) (x).begin(), (x).end()
#define len(x) ((int)(x).size())
#define int long long
#define float long double
using namespace std;

template <class Key, class Value>
pair<Key, Value> findMaxValuePair(unordered_map<Key, Value> const &x) {
  return *max_element(
      x.begin(), x.end(),
      [](const pair<Key, Value> &p1, const pair<Key, Value> &p2) { return p1.second < p2.second; });
}

string padStart(int target, int len, char padString) {
  ostringstream ss;
  ss << setfill(padString) << right << setw(len) << target << flush;
  return ss.str();
}

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  int maxHeight = 0;
  int stand = 0;

  rep(i, N, 0) {
    int currentHeight;
    cin >> currentHeight;

    maxHeight = max(maxHeight, currentHeight);

    if (i == 0) {
      continue;
    }

    if (maxHeight <= currentHeight) {
      continue;
    };

    int currentStand = abs(maxHeight - currentHeight);
    stand += currentStand;
  }

  cout << stand << endl;

  return 0;
}
