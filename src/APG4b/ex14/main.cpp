#include <bits/stdc++.h>
#define rep(i, n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define ALL(x) (x).begin(), (x).end()
#define len(x) ((int)(x).size())
#define int long long
#define float long double
using namespace std;

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector<int> heights(3, 0);
  rep(i, 3) cin >> heights.at(i);

  sort(ALL(heights));
  reverse(ALL(heights));

  cout << (heights[0] - heights[2]) << endl;
}
