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

  int N;
  cin >> N;

  int total = 0;
  vector<int> scores(N, 0);
  rep(i, N) {
    int score;
    cin >> score;
    scores.at(i) = score;
    total += score;
  }

  int average = total / N;

  rep(i, N) {
    cout << abs(average - scores.at(i)) << endl;
  }
}
