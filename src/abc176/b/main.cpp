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

  string N;

  cin >> N;

  int total = 0;
  rep(i, len(N), 0) total += (int)(N.at(i) - '0');

  cout << (total % 9 == 0 ? "Yes" : "No") << endl;

  return 0;
}
