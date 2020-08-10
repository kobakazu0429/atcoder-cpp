#include <bits/stdc++.h>
#define len(x) ((int)(x).size())

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  int a = 1;

  while (N > 1000 * a) ++a;

  cout << 1000 * a - N << endl;

  return 0;
}
