#include <bits/stdc++.h>
using namespace std;
void solve() {
   double_t a, b, c;
   cin >> a >> b >> c;
   double_t t = b * b - 4 * a * c;
   if (!t) {
      cout << "one solution\n";
      double_t ans = -b / (2 * a);
      cout << ans << '\n';
   }
   else if (t > 0) {
      cout << "two solution\n";
      double_t ans1 = (-b + sqrt(t)) / (2 * a), ans2 = (-b - sqrt(t)) / (2 * a);
      cout << ans1 << " and " << ans2 << '\n';
   }
   else cout << "imagine number\n";
}
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t = 1;
   cin >> t;
   while (t--) solve();
}