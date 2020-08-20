#include <bits/stdc++.h>
#define len(x) ((int)(x).size())
#define int long long
#define float long double
using namespace std;

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int pattern;
  cin >> pattern;

  if (pattern == 1) {
    int price, N;
    cin >> price >> N;
    cout << (price * N) << endl;
    return 0;
  }

  if (pattern == 2) {
    string text;
    cin >> text;
    cout << text << "!" << endl;

    int price, N;
    cin >> price >> N;
    cout << (price * N) << endl;

    return 0;
  }
}
