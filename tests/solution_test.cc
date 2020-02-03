#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(MapShould, MapReturn) {
  Solution solution;
  std::string str1 = "add";
  std::string str2 = "egg";
  std::map<char, char> actual = solution.MapStrings(str1, str2);
  std::map<char, char> expected;
  expected.insert(std::pair<char, char> ('a', 'e'));
  expected.insert(std::pair<char, char> ('d', 'g'));
  EXPECT_EQ(expected, actual);
}

TEST(MapShould_1, MapReturn_1) {
  Solution solution;
  std::string str1 = "extreme";
  std::string str2 = "egg";
  std::map<char, char> actual = solution.MapStrings(str1, str2);
  std::map<char, char> expected;
  EXPECT_EQ(expected, actual);
}

TEST(MapShould_2, MapReturn_2) {
  Solution solution;
  std::string str1 = "harder";
  std::string str2 = "waiter";
  std::map<char, char> actual = solution.MapStrings(str1, str2);
  std::map<char, char> expected;
  EXPECT_EQ(expected, actual);
}

TEST(MapShould_3, MapReturn_3) {
  Solution solution;
  std::string str1 = "aabbrr";
  std::string str2 = "ddeekk";
  std::map<char, char> actual = solution.MapStrings(str1, str2);
  std::map<char, char> expected;
  expected.insert(std::pair<char, char> ('a', 'd'));
  expected.insert(std::pair<char, char> ('b', 'e'));
  expected.insert(std::pair<char, char> ('r', 'k'));
  EXPECT_EQ(expected, actual);
}
