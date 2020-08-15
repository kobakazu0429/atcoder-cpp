#include <bits/stdc++.h>
#define len(x) ((int)(x).size())

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string input;

  cin >> input;

  if(input=="SSS")cout << 0 << endl;
  else if(input=="SRR"||input=="RRS")cout << 2 << endl;
  else if(input=="RRR")cout << 3 << endl;
  else cout << 1 << endl;

  return 0;
}
