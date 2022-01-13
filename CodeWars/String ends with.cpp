#include <string>
using namespace std;

bool solution(std::string const& str, std::string const& ending) {

    //  return (str.at(str.size() - 1) == ending.at(ending.size() - 1) && str.at(str.size() - 2) == ending.at(ending.size() - 2));
    //  Эта вещь тоже не работает на codewars
    //  Caught std::exception, what(): basic_string::at: __n (which is 18446744073709551615) >= this->size() (which is 0)
    //  По-этому надо думать что-то другое
    string st;
    for (int i = str.size() - ending.size(); i < str.size(); i++)
    {
        st.push_back(str.at(i));
    }
    return (st == ending);

    // А еще подсмотрел на кодварсе 
    // return ( std::string(str.end() - ending.size(), str.end()) == ending);
}