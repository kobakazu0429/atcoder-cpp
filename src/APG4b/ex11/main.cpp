#include <bits/stdc++.h>
#define len(x) ((int)(x).size())
#define int long long
#define float long double
using namespace std;

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, A;
  cin >> N >> A;

  for (int i = 0; i < N; i++) {
    int B;
    char op;
    cin >> op >> B;

    if(op == '/' && B == 0) {
      cout << "error" << endl;
      return 0;
    }

    if      (op == '+') A += B;
    else if (op == '-') A -= B;
    else if (op == '*') A *= B;
    else if (op == '/') A /= B;

    cout << i + 1 << ":" << A << endl;
  }
}
