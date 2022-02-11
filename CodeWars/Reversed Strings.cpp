#include <string>
using namespace std;
//'world' = > 'dlrow'
//'word' = > 'drow'

string reverseString(string str)
{
    string result;
    for (size_t i = str.size(); i != 0; --i)
    {
        result += str.at(i - 1);
    }
    return result;


    //   return std::string(str.rbegin(), str.rend());


    //   reverse(str.begin(), str.end());
    //   return str;
}