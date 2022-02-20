#include <vector>
#include <algorithm>
using namespace std;

//Your task is to make two functions, maxand min(maximumand minimum in PHPand Python,
//maxiand mini in Julia) that take a(n) array / vector of integers list as input and outputs,
//respectively, the largestand lowest number in that array / vector.
//
//#Examples
//
//max({ 4,6,2,1,9,63,-134,566 }) returns 566
//min({ -52, 56, 30, 29, -54, 0, -110 }) returns - 110
//max({ 5 }) returns 5
//min({ 42, 54, 65, 87, 0 }) returns 0
//#Notes
//
//You may consider that there will not be any empty arrays / vectors.

int min(vector<int> list) {
    int result = 0x7FFFFFFF;
    for (int it : list)
    {
        if (it < result)
        {
            result = it;
        }
    };
    return  result;
}

int max(vector<int> list) {
    int result = 0x80000000;
    for (int it : list)
    {
        if (it > result)
        {
            result = it;
        }
    };
    return  result;
}


    // In the STL there is a standard way to do it:


//#include <algorithm>

//    return *std::min_element(list.begin(), list.end());

//    return *std::max_element(list.begin(), list.end());
