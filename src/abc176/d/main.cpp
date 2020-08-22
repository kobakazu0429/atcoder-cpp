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

// void search(int now_h, int now_w, int direction_h, int direction_w) {
//   int next_h = now_h + direction_h;
//   int next_w = now_w + direction_w;
// }

signed main() {
  // cin.tie(0);
  // ios::sync_with_stdio(false);

  int H, W;
  cin >> H >> W;

  int C_H, C_W;
  cin >> C_H >> C_W;

  int D_H, D_W;
  cin >> D_H >> D_W;

  bool isOnlyRoad = true;
  bool isOnlyWall = true;

  vector<vector<char>> S(H, vector<char>(W));
  rep(i, H, 0) {
    string s;
    cin >> s;

    rep(j, W, 0) {
      char _s = s.at(j);
      S.at(i).at(j) = _s;

      if (isOnlyRoad) isOnlyRoad = (_s == '.');
      if (isOnlyWall) {
        if (i == C_H - 1 || i == D_H - 1) continue;
        if (j == D_W - 1 || j == D_W - 1) continue;
        isOnlyWall = (_s == '#');
      }
    }
  }

  if (isOnlyRoad) {
    cout << 0 << endl;
    return 0;
  }

  int diff_h = C_H - D_H;
  int diff_w = C_W - D_W;

  if (isOnlyWall) {
    int a = abs(diff_h);
    int b = abs(diff_w);

    if (a <= 2 && b <= 2) {
      cout << 1 << endl;
    } else {
      cout << -1 << endl;
    }
    return 0;
  }

  int minimum = pow(10, 4);

  // ↑: 1, ↓: -1
  // ←: 1, →: -1
  int direction_h = diff_h > 0 ? 1 : -1;
  int direction_w = diff_w > 0 ? 1 : -1;

  // rep(i, H, 0) rep(j, W, 0) {
  //   char c = S.at(i).at(j);
  //   // if (s == "#") continue;

  //   int a = abs(i - D_H);
  //   int b = abs(i - D_W);

  //   minimum = min(minimum, pow(a, 2) + pow(b, 2));
  // }

  // char c = '.';
  // while (1) {
  //   search(C_H, , C_W);
  //   char c = S.at(next_h).at(next_w);
  // }

  return 0;
}
