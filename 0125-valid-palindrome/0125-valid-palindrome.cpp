#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>


class Solution {
public:
bool isPalindrome(string s) {
  int i = 0;
  int result = 0;
  string buf;

  while (s[i] != '\0') {
    // Stripping
    if (isalnum(s[i])) {
      buf.push_back(tolower(s[i]));
    }
    i++;
  }
  int size = buf.size();
  i = 0;
  while (i < size) {
    int rev_i = (size - 1) - i;
    if (buf[i] != buf[rev_i]) {
      return false;
    }
    i++;
  }
  return true;
}



};