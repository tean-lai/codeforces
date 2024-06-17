#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <vector>

using namespace std;

void solve() {
  int a, b;
  cin >> a >> b;

  int ans = 0;
  while (a > 0 || b > 0) {
    if ((a & 1) == (b & 1))
      ans++;
    else
      break;
    a >>= 1;
    b >>= 1;
  }

  cout << (1 << ans) << endl;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i)
    solve();
}
