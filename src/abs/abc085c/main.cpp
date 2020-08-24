#include <bits/stdc++.h>
#define rep(i, n, init) for (int i = init, len = (n); i < len; ++i)
#define ALL(x) (x).begin(), (x).end()
#define _GLIBCXX_DEBUG
#define int long long
#define float long double
#define len(x) ((int)(x).size())
#define ALL(x) (x).begin(), (x).end()
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

bool isEven(const int &n) {
  return !(n & 1);
}
int ctoi(const char c) {
  return ('0' <= c && c <= '9') ? (c - '0') : -1;
}

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, Y;
  cin >> N >> Y;

  // 全探索:TLE O( (N+1)^3 )
  // rep(a, N + 1, 0) {
  //   rep(b, N + 1, 0) {
  //     rep(c, N + 1, 0) {
  //       int total = 10000 * a + 5000 * b + 1000 * c;
  //       if (a + b + c == N && total == Y) {
  //         cout << a << " " << b << " " << c << endl;
  //         return 0;
  //       };
  //     }
  //   }
  // }

  // a+b+c=N を利用した全探索:AC O( (N+1)^2 )
  rep(a, N + 1, 0) {
    rep(b, N + 1, 0) {
      int c = N - (a + b);
      if (c < 0) continue;
      int total = 10000 * a + 5000 * b + 1000 * c;
      if (total == Y) {
        cout << a << " " << b << " " << c << endl;
        return 0;
      };
    }
  }

  // a+b+c=N を利用した全探索:AC O( (N+1)^2 )
  rep(a, N + 1, 0) {
    rep(b, N - a + 1, 0) {
      int c = N - a - b;
      int total = 10000 * a + 5000 * b + 1000 * c;
      if (total == Y) {
        cout << a << " " << b << " " << c << endl;
        return 0;
      };
    }
  }

  cout << "-1 -1 -1" << endl;

  return 0;
}
