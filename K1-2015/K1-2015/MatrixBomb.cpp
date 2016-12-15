#include <iostream>

using namespace std;

//function to check whethere the cell is in the blast zone
bool IsInRadius(double xBomb, double yBomb, double xCoord, double yCoord, double radius)
{
	return pow(xBomb - xCoord, 2) + pow(yBomb - yCoord, 2) <= pow(radius, 2);
}

void FillMatrix(int matrixToFill[][10], int size)
{
	int counter = 1;

	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			matrixToFill[i][j] = counter++;
}

//int main()
//{
//	int matrix[10][10];
//	FillMatrix(matrix, 10);
//
//	int sumOfNumbersInBlastZone = 0;
//	int bombX;
//	int bombY;
//	double radius;
//
//	while (true)
//	{
//		cin >> bombX;
//		cin >> bombY;
//		cin >> radius;
//
//		if (bombX < 0 || bombX > 9 || bombY < 0 || bombY > 9)
//			cout << "Invalid values, enter again" << endl;
//		else
//			break;
//	}
//
//	for (int row = 0; row < 10; row++)
//		for (int col = 0; col < 10; col++)
//			if (IsInRadius((double)bombX, (double)bombY, (double)row, (double)col, radius))
//				sumOfNumbersInBlastZone += matrix[row][col];
//
//	cout << sumOfNumbersInBlastZone << endl;
//	system("pause");
//	return 0;
//}