#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  cout << (1000 * ((n / 1000) + (n % 1000 ? 1 : 0)) - n) << endl;
  return 0;
}
