#include <bits/stdc++.h>
#define rep(i, n, init) for (int i = init, len = (n); i < len; ++i)
#define ALL(x) (x).begin(), (x).end()
#define len(x) ((int)(x).size())
#define int long long
#define float long double
using namespace std;

int count_report_num(vector<vector<int>> &children, int x) {
  if (len(children[x]) == 0) return 1;

  int total = 1;
  for (auto c : children[x]) total += count_report_num(children, c);
  return total;
}

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  vector<int> p(N);
  p.at(0) = -1;
  rep(i, N, 1) cin >> p.at(i);

  // 組織の関係から2次元配列を作る
  vector<vector<int>> children(N);
  rep(i, N, 1) {
    int parent = p.at(i);
    children.at(parent).push_back(i);
  }

  // 各組織について、答えを出力
  for (int i = 0; i < N; i++) {
    cout << count_report_num(children, i) << endl;
  }
}
