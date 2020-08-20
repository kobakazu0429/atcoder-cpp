#include <bits/stdc++.h>
#define len(x) ((int)(x).size())
#define int long long
#define float long double
using namespace std;

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string S;
  getline(cin, S);

  int answer = 1;

  for (int i = 0, l = len(S); i < l; i++) {
    if(S.at(i) == '+') answer++;
    else if(S.at(i) == '-') answer--;
  }

  cout << answer << endl;
}
