#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(x) (x).begin(), (x).end()
#define _GLIBCXX_DEBUG
#define int long long
#define float long double
#define len(x) ((int)(x).size())
using namespace std;

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, X, T;

  cin >> N >> X >> T;

  int count = N / X + (N % X == 0 ? 0 : 1);

  cout << (count * T) << endl;

  return 0;
}
