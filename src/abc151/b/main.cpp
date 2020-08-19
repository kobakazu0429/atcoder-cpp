#include <bits/stdc++.h>
#define len(x) ((int)(x).size())

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, K, M;
  cin >> N >> K >> M;

  int total = 0;
  int a = 0;

  for (size_t i = 0; i < N - 1; i++) {
    cin >> a;
    total += a;
  }

  int answer = M * N - total;

  if (answer > K) {
    cout << -1 << endl;
    return 0;
  }

  cout << max(answer, 0) << endl;

  return 0;
}
