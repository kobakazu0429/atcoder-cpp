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

  int prev = 0;
  for (int i = 0; i < 5; i++) {
    int current;
    cin >> current;

    if (prev == current) {
      cout << "YES" << endl;
      return 0;
    }
    prev = current;
  }

  cout << "NO" << endl;
}
