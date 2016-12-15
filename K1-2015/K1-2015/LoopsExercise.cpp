#include <iostream>

using namespace std;

//perfect squares in that interval are 9, 16, 25, 36
bool IsPerfectSquare(int n)
{
	bool result = false;

	switch (n)
	{
		case 9:
		case 16:
		case 25:
		case 36:
			result = true;
			break;
		default:
			result = false;
			break;
	}

	return result;
}

bool IsPrime(int n)
{
	bool result = true;

	for (int i = 2; i < sqrt((double)n); i++)
		if (n % i == 0)
			result = false;

	return result;
}

long GetNthFibonacciNumber(int n)
{
	if (n <= 0)
		return -1;
	if (n == 1 || n == 2)
		return 1;

	int fibFirst = 1;
	int fibSecond = 1;
	int fibNext = fibFirst + fibSecond;

	for (int i = 2; i < n; i++)
	{
		fibNext = fibFirst + fibSecond;
		fibFirst = fibSecond;
		fibSecond = fibNext;
	}

	return fibNext;
}

int GetTriangleNumber(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; i++)
		sum += i;

	return sum;
}

//int main()
//{
//	int input;
//	cin >> input;
//
//	if (IsPrime(input))
//		cout << GetNthFibonacciNumber(input) << endl;
//	else if (IsPerfectSquare(input))
//		cout << GetTriangleNumber(input) << endl;
//	else
//		cout << "The number is neither prime, nor perfect square" << endl;
//
//	system("pause");
//	return 0;
//}