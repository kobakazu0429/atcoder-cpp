#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n, init) for (int i = init, len = (n); i < len; ++i)
#define all(x) (x).begin(), (x).end()
#define int long long
#define float long double
#define len(x) ((int)(x).size())
using namespace std;

template <class Key, class Value>
pair<Key, Value> findMaxValuePair(unordered_map<Key, Value> const &x) {
  return *max_element(
      x.begin(), x.end(),
      [](const pair<Key, Value> &p1, const pair<Key, Value> &p2) { return p1.second < p2.second; });
}

string padStart(int target, int len, char padString) {
  ostringstream ss;
  ss << setfill(padString) << right << setw(len) << target << flush;
  return ss.str();
}

bool startWith(const std::string &s, const std::string &prefix) {
  auto size = prefix.size();
  if (s.size() < size) return false;
  return std::equal(std::begin(prefix), std::end(prefix), std::begin(s), std::begin(s) + size);
}

bool isEven(const int &n) {
  return !(n & 1);
}
int ctoi(const char c) {
  return ('0' <= c && c <= '9') ? (c - '0') : -1;
}

string dream = "dream";
string dreamer = "dreamer";
string erase = "erase";
string eraser = "eraser";

int dream_len = len(dream);
int dreamer_len = len(dreamer);
int erase_len = len(erase);
int eraser_len = len(eraser);

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  reverse(all(dream));
  reverse(all(dreamer));
  reverse(all(erase));
  reverse(all(eraser));

  string S;
  cin >> S;

  reverse(all(S));

  while (true) {
    if (len(S) == 0) {
      break;
    } else if (startWith(S, dream)) {
      S = S.substr(dream_len);
    } else if (startWith(S, dreamer)) {
      S = S.substr(dreamer_len);
    } else if (startWith(S, erase)) {
      S = S.substr(erase_len);
    } else if (startWith(S, eraser)) {
      S = S.substr(eraser_len);
    } else {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;

  return 0;
}
