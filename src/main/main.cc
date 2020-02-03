#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::string str1 = "add";
    std::string str2 = "egg";
    std::string str3 = "extreme";
    std::string str4 = "harder";
    std::string str5 = "waiter";
    std::string str6 = "aabbrr";
    std::string str7 = "ddeekk";
    
    std::map<char,char> output;
    output = solution.MapStrings(str1, str2);
    std::cout <<  "Output:" << std::endl;
    for (auto it = output.begin(); it != output.end(); it++)
        std::cout <<  it->first << "->" << it->second << std::endl;

    output = solution.MapStrings(str3, str2);
    std::cout <<  "Output:" << std::endl;
    for (auto it = output.begin(); it != output.end(); it++)
        std::cout <<  it->first << "->" << it->second << std::endl;
    
    output = solution.MapStrings(str4, str5);
    std::cout <<  "Output:" << std::endl;
    for (auto it = output.begin(); it != output.end(); it++)
        std::cout <<  it->first << "->" << it->second << std::endl;

    output = solution.MapStrings(str6, str7);
    std::cout <<  "Output:" << std::endl;
    for (auto it = output.begin(); it != output.end(); it++)
        std::cout <<  it->first << "->" << it->second << std::endl;
    
    return EXIT_SUCCESS;
}