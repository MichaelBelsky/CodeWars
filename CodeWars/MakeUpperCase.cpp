#include <string>
using namespace std;
std::string makeUpperCase(const std::string& input_str)
{
	string res;
	for (auto i : input_str)
	{
		res += (char)toupper(i);
	}
	return res;
}