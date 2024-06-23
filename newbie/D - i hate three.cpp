#include <bits/stdc++.h>
using namespace std;
void solve() {
   int n;
   cin >> n;
   int ans = 0;
   while (n--) {
      ans++;
      while (ans % 3 == 0 || ans % 10 == 3) ans++;
   }
   cout << ans << '\n';
}
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t = 1;
   cin >> t;
   while (t--) solve();
}