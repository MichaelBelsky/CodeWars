#include <string>
#include <algorithm>
using namespace std;


//  Complete the function that accepts a string parameter, and reverses each word in the string.
//  All spaces in the string should be retained.
//  "This is an example!" ==> "sihT si na !elpmaxe"
//  "double  spaces" ==> "elbuod  secaps"

string reverse_words(string str)
{
    string result;
    string::iterator tmp = str.begin();
    for (std::string::iterator i = str.begin(); i != str.end(); ++i)
    {
        if (*i == ' ')
        {
            reverse(tmp, i);
            tmp = i + 1;
        }
    }
    reverse(tmp, str.end());

    return str;
}