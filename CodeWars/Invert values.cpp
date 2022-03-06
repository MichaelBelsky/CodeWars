#include <vector>
//
//Description:
//Given a set of numbers, return the additive inverse of each.Each positive becomes negatives,
//and the negatives become positives.
//
//invert([1, 2, 3, 4, 5]) == [-1, -2, -3, -4, -5]
//invert([1, -2, 3, -4, 5]) == [-1, 2, -3, 4, -5]
//invert([]) == []

std::vector<int> invert(std::vector<int> values)
{
    for (auto& i : values)
    {
        i *= (-1);
    }
    return values;
}


        // CODEWARS

//#include <vector>
//#include <algorithm>
//
//    std::vector<int> invert(std::vector<int> values)
//    {
//        transform(values.begin(), values.end(), values.begin(), std::negate<int>());;
//        return values;
//    }


