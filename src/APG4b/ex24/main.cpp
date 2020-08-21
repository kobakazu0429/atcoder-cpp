#include <bits/stdc++.h>
#define rep(i, n, init) for (int i = init, len = (n); i < len; ++i)
#define ALL(x) (x).begin(), (x).end()
#define len(x) ((int)(x).size())
#define int long long
#define float long double
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

struct Clock {
  int hour;    // 時間を表す (0~23の値をとる)
  int minute;  // 分を表す   (0~59の値をとる)
  int second;  // 秒を表す   (0~59の値をとる)

  void set(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
  }

  string to_str() {
    // 必要ではないが、書いておくと誤りがある場合に気づきやすくなる
    if (!(0 <= hour && hour <= 23)) return "out range of hours";
    if (!(0 <= minute && minute <= 59)) return "out range of minutes";
    if (!(0 <= second && second <= 59)) return "out range of secconds";

    string HH = padStart(hour, 2, '0');
    string MM = padStart(minute, 2, '0');
    string SS = padStart(second, 2, '0');

    return HH + ":" + MM + ":" + SS;
  }

  void shift(int diff_second) {
    int diff_hour = diff_second / 3600;
    diff_second %= 3600;
    int diff_minute = diff_second / 60;
    diff_second %= 60;

    second += diff_second;
    if (second >= 60) {
      // 分へ繰り上げ
      minute += 1;
      second -= 60;
    } else if (second < 0) {
      // 分から繰り下げ
      minute -= 1;
      second += 60;
    }

    minute += diff_minute;
    if (minute >= 60) {
      // 時へ繰り上げ
      hour += 1;
      minute -= 60;
    } else if (minute < 0) {
      // 時から繰り下げ
      hour -= 1;
      minute += 60;
    }

    hour += diff_hour;
    if (hour >= 24) {
      hour -= 24;
    } else if (hour < 0) {
      hour += 24;
    }
  }
};

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int hour, minute, second;
  cin >> hour >> minute >> second;

  int diff_second;
  cin >> diff_second;

  Clock clock;
  clock.set(hour, minute, second);

  cout << clock.to_str() << endl;

  clock.shift(diff_second);
  cout << clock.to_str() << endl;
}
