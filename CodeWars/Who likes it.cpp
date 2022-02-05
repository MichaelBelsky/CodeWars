#include <vector>
#include <iostream>
#include <string>

using namespace std;
//[] -- > "no one likes this"
//["Peter"]                         -- > "Peter likes this"
//["Jacob", "Alex"]                 -- > "Jacob and Alex like this"
//["Max", "John", "Mark"]           -- > "Max, John and Mark like this"
//["Alex", "Jacob", "Mark", "Max"]  -- > "Alex, Jacob and 2 others like this"


std::string likes(const std::vector<std::string>& names)
{
	switch (names.size())
	{
	case 0:
		return "no one likes this";
		break;

	case 1:
		return names.at(0) + " likes this";
		break;

	case 2:
		return names.at(0) + " and " + names.at(1) + " like this";
		break;

	case 3:
		return names.at(0) + ", " + names.at(1) + " and " + names.at(2) + " like this";
		break;

	default:
		return names.at(0) + ", " + names.at(1) + " and " + to_string(names.size() - 2) + " others like this";
		break;
	}
}


//for (const auto& user : names)
//users += user + " and ";
//cout << users << endl;

	//default:
	//	string users;
	//	for (size_t i = 0; i < names.size(); i++)
	//	{
	//		users += names.at(i);
	//		if (i < names.size() - 2)
	//			users += ", ";
	//		if (i == names.size() - 2)
	//			users += " and ";
	//	}
	//	return users + " like this";

	/*switch (names.size())
	{
	case 0:
		return "no one likes this";
		break;

	case 1:
		return names.at(0) + " likes this";
		break;


	default:
		string users;
		for (size_t i = 0; i < names.size() - 1; i++)
		{
			users += names.at(i) + " and " + names.at(i + 1);
		}
		return users + " like this";
		break;
	}*/

	//if (names.size() < 2) 	// if only one user
	//{
	//	return names.at(0) + " likes this";
	//}
	//else
	//{
	//	string users;
	//	for (size_t i = 0; i < names.size()-1; i++)
	//	{
	//		users += names.at(i) + " and " + names.at(i + 1);
	//	}
	//	return users + " like this";



		//return users + " like this"; 
	//}
