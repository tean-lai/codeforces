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
  vector<int> arr(n);
  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  double acc = 0;
  for (int i = 0; i < n; ++i) {
    acc += (1.0 / arr[i]);
  }
  if (acc > 0.99999) {
    cout << -1 << endl;
    return;
  }
  cout << "hi\n";
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i)
    solve();
}
