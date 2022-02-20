#include <string>
#include <set>
using namespace std;

//Take 2 strings s1 and s2 including only letters from ato z.Return a new sorted string, 
//the longest possible, containing distinct letters - each taken only once - coming from s1 or s2.

//a = "xyaabbbccccdefww"
//b = "xxxxyyyyabklmopq"
//longest(a, b) -> "abcdefklmopqwxy"
//
//a = "abcdefghijklmnopqrstuvwxyz"
//longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"

class TwoToOne
{
public:
    static std::string longest(const std::string& s1, const std::string& s2)
    {
        string result;
        result = s1 + s2;
        set<char> tmpSet(result.begin(), result.end());
        result = "";
        for (auto it : tmpSet)
        {
            result += it;
        }
        return result;
    }
};



    //  SMART solution from CodeWars

//std::string longest(const std::string& s1, const std::string& s2) {
//    std::set<char> chars(s1.begin(), s1.end());
//    for (char c : s2)
//        chars.insert(c);
//    return std::string(chars.begin(), chars.end());


    // Solution with SORT and UNIQUE from CodeWars

//std::string result = s1 + s2;
//sort(result.begin(), result.end());
//result.erase(std::unique(result.begin(), result.end()), result.end());
//return result;


