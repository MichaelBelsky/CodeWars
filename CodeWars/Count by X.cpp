#include <vector>
using namespace std;

std::vector<int> countBy(int x, int n) {
    vector<int> MyVector;
    for (size_t i = 1; i <= n; i++)
    {
        MyVector.push_back((i * x));
    }
    return MyVector;
}

//for (auto it : countBy(2, 5))
//{
//    cout << it << endl;
//};