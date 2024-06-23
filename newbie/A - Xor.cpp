#include <bits/stdc++.h>
using namespace std;
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   string s, t;
   cin >> s >> t;
   while (s.length() < t.length()) s = "0" + s;
   while (s.length() > t.length()) t = "0" + t;
   string ans;
   for (int i = 0; i < s.length(); i++) {
      if (s[i] != t[i]) ans += "1";
      else ans += "0";
   }
   cout << ans;
}
