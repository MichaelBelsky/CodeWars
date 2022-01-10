#include <iostream>
#include <string>
using namespace std;

/*	Write a function to convert a name into initials.This kata strictly takes two words with one space in between them.

	The output should be two capital letters with a dot separating them.

	It should look like this:

	Sam Harris = > S.H

	patrick feeney = > P.F	*/

string abbrevName(string name)
{
	string res;
	int space = name.find_first_of(' ');
	res = string() + (char)toupper(name[0]) + '.' + (char)toupper(name[space + 1]);
	return res;
}