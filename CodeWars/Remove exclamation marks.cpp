#include <string>
using namespace std;
std::string removeExclamationMarks(std::string str) {
    str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
    return str;

    //  Just for ubderstanding how does REMOVE works

   //auto it = remove(str.begin(), str.end(), '!');
   //string ab{ it , str.end()};
   //cout << ab << endl << endl;

}