#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(x) (x).begin(), (x).end()
#define len(x) ((int)(x).size())
#define int long long
#define float long double
using namespace std;

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  vector<int> A(M), B(M);
  rep(i, M) cin >> A.at(i) >> B.at(i);

  vector<vector<string>> result(N, vector<string>(N, "-"));

  rep(i, M) {
    int a = --A.at(i), b = --B.at(i);
    result.at(a).at(b) = "o";
    result.at(b).at(a) = "x";
  }

  rep(a, N) {
    rep(b, N) cout << result[a][b] << (b != N - 1 ? " " : "");
    cout << endl;
  }
}
