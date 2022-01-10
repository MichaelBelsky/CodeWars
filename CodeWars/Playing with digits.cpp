#include <iostream>
#include <cmath>

using namespace std;



/*Some numbers have funny properties. For example:

89 --> 8¹ + 9² = 89 * 1
695 --> 6² + 9³ + 5⁴= 1390 = 695 * 2
46288 --> 4³ + 6⁴+ 2⁵ + 8⁶ + 8⁷ = 2360688 = 46288 * 51

Given a positive integer n written as abcd... (a, b, c, d... being digits) and a positive integer p

we want to find a positive integer k, if it exists, such as the sum of the digits of n taken to the successive powers of p is equal to k * n.
In other words:
	Is there an integer k such as : (a ^ p + b ^ (p+1) + c ^(p+2) + d ^ (p+3) + ...) = n * k
If it is the case we will return k, if not return -1.
Note: n and p will always be given as strictly positive integers.*/

class DigPow
{
private:
	int n, p;
public:

	DigPow(int n, int p)
	{
		this->n = n;
		this->p = p;
	}

	static int digPow(int n, int p)
	{
		int rank = 0;
		int* arr;
		int size = log10(trunc(n)) + 1;
		arr = new int[size];
		;
		int tmp = n;
		int i = 0;
		while (tmp > 0)
		{
			arr[size - 1 - i] = tmp % 10;
			tmp /= 10;
			i++;
		}

		int accu = 0;
		for (int i = 0; i < size; i++)
		{
			accu = accu + pow(arr[i], p + i);
		};
		return accu % n ? -1 : (accu / n);

		delete[] arr;
	};

};