#include <string>
using namespace std;
std::string makeUpperCase(const std::string& input_str)
{
	string res;
	for (auto i : input_str)
	{
		res +=toupper(i);
	}
	return res;
}

			//	CODEWARS
//{
//	std::string str = input_str;
//	std::transform(str.begin(), str.end(), str.begin(), ::toupper);
//	return str;
//}

