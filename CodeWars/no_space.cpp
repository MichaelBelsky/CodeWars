#include <string>
using namespace std;

//Simple, remove the spaces from the string then return the resultant string.

string no_space(string x)
{
//      x.erase(std::remove(x.begin(), x.end(), ' '), x.end());
//      ��� ����� ��������, �� codewars �� ��������� #include <algorithm>

    string result;
    for (size_t i = 0; i < x.size(); i++)
    {
        if (x.at(i) != ' ')
        {
            result += x.at(i);
        }
    }
    return result;
};