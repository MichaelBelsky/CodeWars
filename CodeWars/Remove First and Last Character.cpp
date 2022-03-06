//It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string.
//You're given one parameter, the original string.You don't have to worry with strings with less than two characters.
#include <string>
using namespace std;

string sliceString(string str)
{
    str.pop_back();
    str.erase(0, 1);
    return str;
}


//    return str.substr(1, str.size() - 2); 
//1.
// return string(str.begin() + 1, str.end() - 1);

//2.
//  int n = str.size();
//str.replace(0, 1, "");
//str.replace(n - 2, 1, "");

//3.
