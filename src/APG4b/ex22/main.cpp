#include <bits/stdc++.h>
#define rep(i, n, init) for (int i = init, len = (n); i < len; ++i)
#define ALL(x) (x).begin(), (x).end()
#define len(x) ((int)(x).size())
#define int long long
#define float long double
using namespace std;

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  int b, a;

  vector<pair<int, int>> ba(N);
  rep(i, N, 0) {
    cin >> a >> b;
    ba.at(i) = make_pair(b, a);
  }

  sort(ALL(ba));

  rep(i, N, 0) {
    tie(b, a) = ba.at(i);
    cout << a << " " << b << endl;
  }

  return 0;
}
