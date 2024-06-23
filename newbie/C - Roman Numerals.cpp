#include <bits/stdc++.h>
using namespace std;
void solution1() {
   string s, ans;
   cin >> s;
   map<int, string> mp {
      {1, "I"}, {2, "II"}, {3, "III"}, {4, "IV"}, {5, "V"}, {6, "VI"}, {7, "VII"},
      {8, "VIII"}, {9, "IX"}, {10, "X"}, {20, "XX"}, {30, "XXX"}, {40, "XL"},
      {60, "LX"}, {70, "LXX"}, {80, "LXXX"}, {90, "XC"}, {200, "CC"}, {300, "CCC"},
      {400, "CD"}, {600, "DC"}, {700, "DCC"}, {800, "DCCC"}, {900, "CM"}, {50, "L"},
      {100, "C"}, {500, "D"}, {1000, "M"}, {2000, "MM"}, {3000, "MMM"}
   };
   for (int i = 0, pos = s.length() - 1; i < s.length(); i++, pos--)
      ans += mp[(s[i]-'0') * ceil(pow(10, pos))];
   cout << ans;
}
void solution2() {
   int n;
   cin >> n;
   map<int, string, greater<int>> mp {
      {1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, {40, "XL"}, {50, "L"},
      {90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}
   };
   string ans;
   for (auto it = mp.begin(); it != mp.end(); it++) {
      while (n >= it->first) {
         ans += it->second;
         n -= it->first;
      }
   }
   cout << ans;
}
int main() {
   // solution1();
   solution2();
}