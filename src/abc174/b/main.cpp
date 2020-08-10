#include <bits/stdc++.h>
#define len(x) ((int)(x).size())

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, D;
  cin >> N >> D;
  int a, b;

  int count = 0;
  while (N) {
    cin >> a >> b;
    if (pow(a, 2) + pow(b, 2) <= pow(D, 2)) count++;
    --N;
  }

  cout << count << endl;

  return 0;
}
