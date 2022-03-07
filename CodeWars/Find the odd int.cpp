#include <map>
#include <vector>

using namespace std;

//Description:
//Given an array of integers, find the one that appears an odd number of times.
//
//There will always be only one integer that appears an odd number of times.
//
//Examples
//[7] should return 7, because it occurs 1 time(which is odd).
//[0] should return 0, because it occurs 1 time(which is odd).
//[1, 1, 2] should return 2, because it occurs 1 time(which is odd).
//[0, 1, 0, 1, 0] should return 0, because it occurs 3 times(which is odd).
//[1, 2, 2, 3, 3, 3, 4, 3, 3, 3, 2, 2, 1] should return 4, because it appears 1 time(which is odd).


//
//Assert::That(findOdd(V{ 20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5 }), Equals(5));
//Assert::That(findOdd(V{ 1,1,2,-2,5,2,4,4,-1,-2,5 }), Equals(-1));
//Assert::That(findOdd(V{ 20,1,1,2,2,3,3,5,5,4,20,4,5 }), Equals(5));
//Assert::That(findOdd(V{ 10 }), Equals(10));
//Assert::That(findOdd(V{ 1,1,1,1,1,1,10,1,1,1,1 }), Equals(10));

int findOdd(const std::vector<int>& numbers) {
    map<int, int> myMap;

    for (auto i : numbers)
        myMap[i] ++;

    int acc = 0;
    int res;

    for (auto i : myMap)
    {
        if (acc < i.second && i.second % 2)
        {
            acc = i.second;
            res = i.first;
        }
    }
    return res;
}


    //CODEWARS

//  2.
int findOdd2(const std::vector<int>& numbers) {
    for (auto elem : numbers) {
        if (std::count(numbers.begin(), numbers.end(), elem) % 2 != 0) {
            return elem;
        }
    }
    return 0;
}



//  3.
#include <functional>
#include <numeric>
#include <vector>

int findOdd3(const std::vector<int>& numbers) {
    return std::accumulate(numbers.cbegin(), numbers.cend(), 0, std::bit_xor<>());
}


// 4
#include <vector>

int findOdd4(const std::vector<int>& numbers) {
    int result = 0;
    for (auto& num : numbers) {
        result = result ^ num;

    }
    return result;
}