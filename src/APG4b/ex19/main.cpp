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

  int correct_count = 0;
  int wrong_count = 0;

  int input;

  rep(i, 9) {
    rep(j, 9) {
      int calc = (i + 1) * (j + 1);
      cout << calc << (j != 8 ? " " : "");

      cin >> input;
      (calc == input ? correct_count : wrong_count)++;
    }
    cout << endl;
  }

  cout << correct_count << endl;
  cout << wrong_count << endl;
}
