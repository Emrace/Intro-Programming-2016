#include "iostream"

using namespace std;

int main()
{
	int arr[10];
	int highestPower;

	cin >> highestPower;

	for (int i = 0; i < 10; i++)
		cin >> arr[i];


	cout << "Without the bonus" << endl;

	cout << "f'(x) = ";

	int counter = highestPower;

	//without the bonus
	for (int i = 0; i < 10; i++)
	{
		int currentCoeff = arr[i] * counter;
		counter--;

		if (currentCoeff == 0)
		{
			break;
		}

		cout << currentCoeff << " ";
	}

	cout << endl;


	cout << "For the bonus" << endl;
	cout << "f'(x) = ";

	counter = highestPower;
	//for the bonus
	for (int i = 0; i < 10; i++)
	{
		int currentCoeff = arr[i] * counter;
		counter--;

		if (currentCoeff == 0)
		{
			break;
		}

		if (counter > 1)
		{
			cout << currentCoeff << "x^" << counter;
		}
		else if (counter == 1)
		{
			cout << currentCoeff << "x";
		}
		else
		{
			cout << currentCoeff;
		}

		if (counter > 1)
		{
			cout << " + ";
		}
		else
			cout << " ";



	}

	cout << endl;

	system("pause");
	return 0;
}