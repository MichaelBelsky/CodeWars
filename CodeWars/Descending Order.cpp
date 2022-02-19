#include <cinttypes>
#include <set>
#include <queue>


using namespace std;

//Your task is to make a function that can take any non - negative integer as an argument
//and return it with its digits in descending order.Essentially, rearrange the digits to create the highest possible number.

//Examples:
//Input: 42145 Output : 54421
//
//Input : 145263 Output : 654321
//
//Input : 123456789 Output : 987654321


uint64_t descendingOrder(uint64_t a)
{

    // first variant with set (multiset)


    multiset <uint64_t> arr;

    while (a >= 10)
    {
        arr.insert(a % 10);
        a /= 10;
    }
    arr.insert(a % 10);
    uint64_t res = 0;
    uint64_t cnt = 0;
    uint64_t b;
    for (auto it : arr)
    {
        b = pow(10, cnt);  // WTF!!! it works only this way!
        res += it * b;
        cnt++;
    }
    return res;

    // second with priority queue
    // does not work ((((

    //priority_queue <uint64_t> arr;
    //while (a>=10)
    //{
    //    arr.emplace(a%10);
    //    a /= 10;
    //}
    //arr.emplace(a % 10);
    //uint64_t res =0;
    //int cnt = 0;
    //while (!arr.empty())
    //{
    //    res += arr.top() * pow(10, cnt);
    //    cnt++;
    //    arr.pop();
    //}
    //return res;

   // return 0;
}

//  cout << descendingOrder(988888655533222110);



        //  From CodeWars

//#include <cinttypes>
//#include <string>
//#include <algorithm>
//
//uint64_t descendingOrder(uint64_t a)
//{
//    std::string s = std::to_string(a);
//    std::sort(s.rbegin(), s.rend());
//    return std::stoull(s);
//}