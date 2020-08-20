#include <bits/stdc++.h>
#define len(x) ((int)(x).size())
#define int long long
#define float long double
using namespace std;

void print_bar_graph(int count) {
  while(count--) cout << "]";
  cout << endl;
}

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int A, B;
  cin >> A >> B;

  cout << "A:";
  print_bar_graph(A);

  cout << "B:";
  print_bar_graph(B);

  return 0;
}
