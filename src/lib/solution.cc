#include "solution.h"

std::map<char, char> Solution::MapStrings(const std::string &str1, const std::string &str2)
{
  std::map<char, char> stringmap;
  unsigned int i = 0;

  if (str1.length() == 0 || str2.length() == 0)
    return stringmap;

  if (str1.length() == str2.length())
  {
    while (i < str1.length())
    {
      if (stringmap.find(str1[i]) == stringmap.end()) {
        stringmap.insert(std::pair<char, char>(str1[i], str2[i]));
        i++;
      }
      else {
        if (stringmap.find(str1[i])->second == str2[i]) {
          i++;
          continue; 
        }
        stringmap.clear();
        break;
      }
    }
  }
  return stringmap;
}