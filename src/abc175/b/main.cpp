#include <bits/stdc++.h>
#define len(x) ((int)(x).size())
using namespace std;
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  if (N < 3) {
    cout << 0 << endl;
    return 0;
  }

  vector<int> l(N, 0);
  for (size_t i = 0; i < N; i++) {
    cin >> l[i];
  }

  int ans = 0;

  // for (size_t i = 0; i < N; i++) {
  //   for (size_t j = i + 1; j < N; j++) {
  //     for (size_t k = j + 1; k < N; k++) {
  //       int a = l[i], b = l[j], c = l[k];
  //       if(a!=b && b != c && c != a) {
  //         if(abs(a-b) < c && c < a + b) {
  //           ans++;
  //         }
  //       }
  //     }
  //   }
  // }

  for (size_t i = 0; i < N; i++) {
    for (size_t j = i + 1; j < N; j++) {
      for (size_t k = j + 1; k < N; k++) {
        int a = l[i];
        int b = l[j];
        int c = l[k];
        if (a == b || a == c || b == c) continue;
        if(abs(a-b) < c && c < a + b) {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}
