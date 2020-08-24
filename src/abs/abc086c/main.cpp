#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n, init) for (int i = init, len = (n); i < len; ++i)
#define all(x) (x).begin(), (x).end()
#define int long long
#define float long double
#define len(x) ((int)(x).size())
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

bool startWith(const std::string &s, const std::string &prefix) {
  auto size = prefix.size();
  if (s.size() < size) return false;
  return std::equal(std::begin(prefix), std::end(prefix), std::begin(s));
}

bool isEven(const int &n) {
  return !(n & 1);
}

int ctoi(const char c) {
  return ('0' <= c && c <= '9') ? (c - '0') : -1;
}

class Point {
  public:
  int x, y;
  explicit Point();
  explicit Point(int x, int y) : x(x), y(y) {
  }
  // ~Point();

  Point &operator=(Point &point);
  Point &operator+=(Point &point);
  Point &operator-=(Point &point);
  Point &operator*=(Point &point);
  Point &operator/=(Point &point);

  Point operator+(Point point);
  Point operator-(Point point);
  Point operator*(Point point);
  Point operator/(Point point);

  bool operator==(Point point);
};

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  int prev_t = 0, prev_x = 0, prev_y = 0;

  rep(i, N, 0) {
    int t, x, y;
    cin >> t >> x >> y;

    int dt = t - prev_t;
    int distance = abs(prev_x - x) + abs(prev_y - y);
    if (distance > dt) {
      cout << "No" << endl;
      return 0;
    }
    if (distance % 2 != dt % 2) {
      cout << "No" << endl;
      return 0;
    }

    prev_t = t;
    prev_x = x;
    prev_y = y;
  }

  cout << "Yes" << endl;
}
