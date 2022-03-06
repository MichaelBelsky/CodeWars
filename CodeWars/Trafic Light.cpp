#include <map>
#include <string>
#include <iostream>
using namespace std;

string current = "green";
std::map<std::string, std::string> mp{ {"green", "yellow"}, {"yellow", "red"}, {"red", "green"} };
//return mp[current];