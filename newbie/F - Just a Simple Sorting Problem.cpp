#include <bits/stdc++.h>
using namespace std;
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int n, freq[26] {};
   cin >> n;
   while (n--) {
      char a; cin >> a;
      freq[a - 'a']++;
   }
   for (int i = 0; i < 26; i++) {
      while (freq[i]--) {
         cout << char(i + 'a');
      }
   }
}