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

  int N, S;
  cin >> N >> S;

  vector<int> A(N), P(N);
  rep(i, N) cin >> A.at(i);
  rep(i, N) cin >> P.at(i);

  int ans = 0;

  for (auto a : A) {
    for (auto p : P) {
      if (a + p == S) ans++;
    }
  }

  cout << ans << endl;
}
