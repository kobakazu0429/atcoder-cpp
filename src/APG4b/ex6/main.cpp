#include <bits/stdc++.h>
#define len(x) ((int)(x).size())
#define int long long
#define float long double
using namespace std;

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int A, B;
  char op;
  cin >> A >> op >> B;

  if (op == '+')                cout << A + B   << endl;
  else if (op == '-')           cout << A - B   << endl;
  else if (op == '*')           cout << A * B   << endl;
  else if (op == '/' && B != 0) cout << A / B   << endl;
  else                          cout << "error" << endl;

  return 0;
}
