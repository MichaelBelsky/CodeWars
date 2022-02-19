#include <string>
#include <vector>
using namespace std;
	//Write a function to split a stringand convert it into an array of words.For example :
	//
	//"Robin Singh" ==> {"Robin", "Singh"}
	//
	//"I love arrays" ==> {"I", "love", "arrays"}

std::vector<std::string> string_to_array(const std::string& s) {
    vector<std::string> res;
    string::const_iterator tmp = s.begin();
    for (std::string::const_iterator i = s.begin(); i != s.end(); ++i)
    {
        if (*i == ' ')
        {
            res.emplace_back(string(tmp, i));
            tmp = i + 1;
        }
    }
    res.emplace_back(string(tmp, s.end()));
    return res;
}

//for (auto it : string_to_array("asda dfhg asd qwgs"))
//{
//    cout << it << endl;
//};




    // some code from StackOverflow

        //string ss = "Str adfasda fgdgdf";
        //size_t pos;
        //do
        //{
        //    size_t pos1 = ss.find_first_of(" "); // символы разделители
        //    cout << ss.substr(0, pos1) << endl;
        //    ss = ss.substr(pos1 + 1);
        //} while (pos != string::npos);


    // Code from CodeWars

//#include <vector>
//#include <string>
//
//std::vector<std::string> string_to_array(const std::string& s) {
//    std::string cur = "";
//    std::vector<std::string> v;
//    for (auto el : s) {
//        if (el != ' ') cur += el;
//        else {
//            v.push_back(cur);
//            cur = "";
//        }
//    }
//    v.push_back(cur);
//    return v;
//}