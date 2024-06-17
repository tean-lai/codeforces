#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  sort(a.begin(), a.end());
  int ai = a[0];
  int aj = -1;
  bool good = true;
  for (int k = 0; k < n; ++k) {
    if (a[k] % ai == 0)
      continue;
    if (aj == -1)
      aj = a[k];
    if (a[k] % aj == 0)
      continue;
    good = false;
    break;
  }
  if (good)
    cout << "Yes\n";
  else
    cout << "No\n";
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i)
    solve();
}
