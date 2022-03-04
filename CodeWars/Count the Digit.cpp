using namespace std;

//Instructions
//Output
//Take an integer n(n >= 0) and a digit d(0 <= d <= 9) as an integer.
//
//Square all numbers k(0 <= k <= n) between 0 and n.
//
//Count the numbers of digits d used in the writing of all the k * *2.
//
//Call nb_dig(or nbDig or ...) the function taking n and d as parameters and returning this count.
//
//Examples:
//n = 10, d = 1
//the k * k are 0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 100
//We are using the digit 1 in : 1, 16, 81, 100. The total count is then 4.
//
//nb_dig(25, 1) returns 11 since
//the k * k that contain the digit 1 are :
//    1, 16, 81, 100, 121, 144, 169, 196, 361, 441.
//    So there are 11 digits 1 for the squares of numbers between 0 and 25.
//

int nbDig(int n, int d)
{
    int res = 0;
    int tmp;
    for (int i = 0; i <= n; i++)
    {
        tmp = i * i;
        do
        {
            if (tmp % 10 == d) res++;
            tmp /= 10;
        } while (tmp >= 10);
    }
    return res;
};


			//			My playing with map container
//
//int nbDig(int n, int d)
//{
//    //    vector <pair<int, int>> myV;
//    map<int, int> myMap;
//    int second = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        int first = i * i;
//        int tmp = first;
//        vector <int> scd;
//        while (tmp >= 10)
//        {
//            scd.emplace_back(tmp % 10);
//            tmp /= 10;
//        }
//        scd.emplace_back(tmp % 10);
//        for (auto j : scd)
//        {
//            if (j == d) second++;
//        }
//        //myV.emplace_back(first, second);
//        myMap.insert(make_pair(first, second));
//    }
//
//    for (auto it : myMap)
//    {
//        cout << it.first << " " << it.second << endl;
//    }
//    return 0;
//};



		// From CODEWARS
//std::string digits;
//for (int k = 0; k <= n; ++k)
//digits += std::to_string(k * k);
//
//return std::count(digits.begin(), digits.end(), std::to_string(d)[0]);
