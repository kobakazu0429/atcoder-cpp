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

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  unordered_map<int, int> A;
  rep(i, N, 0) {
    int a;
    cin >> a;
    auto it = A.find(a);
    auto value = it != A.end() ? ++((*it).second) : 1;
    A.insert(make_pair(a, value));
  }

  auto max = findMaxValuePair<int, int>(A);

  cout << max.first << " " << max.second << endl;

  return 0;
}
