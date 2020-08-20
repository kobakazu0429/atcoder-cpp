#include <bits/stdc++.h>
#define rep(i, n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define ALL(x) (x).begin(), (x).end()
#define len(x) ((int)(x).size())
#define int long long
#define float long double
using namespace std;

int totalScore(int N) {
  int total = 0;
  rep(_, N) {
    int score;
    cin >> score;
    total += score;
  }
  return total;
}

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  int sumA = totalScore(N);
  int sumB = totalScore(N);
  int sumC = totalScore(N);

  cout << (sumA * sumB * sumC) << endl;
}
