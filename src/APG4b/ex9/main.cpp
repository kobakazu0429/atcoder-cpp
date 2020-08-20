#include <bits/stdc++.h>
#define len(x) ((int)(x).size())
#define int long long
#define float long double
using namespace std;

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;

  // 2.の出力
  x *= a + b;
  cout << x << endl;

  // 3.の出力
  x *= x;
  cout << x << endl;

  // 4.の出力
  x--;
  cout << x << endl;

  return 0;
}
