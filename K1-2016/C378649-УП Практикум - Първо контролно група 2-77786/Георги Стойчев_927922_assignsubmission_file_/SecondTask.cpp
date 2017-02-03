// SecondTask.cpp : main project file.

#include "stdafx.h"
#include <iostream>
int n = 0;

void FillMatrix(int** matrix)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << "Enter element on place " << i << " , " << j << "in matrix : ";
			std::cin >> matrix[i][j];
		}
	}
}

void PrintMatrix(int** matrix)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
}
int SumOfCol(int** matrix, int col)
{
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += matrix[i][col];
	}
	return summ;
}

int SumOfEvenCol(int** matrix)
{
	int sum = 0;
	for (int i = 1; i < n; i += 2) //it should start from zero
	{
		sum += SumOfCol(matrix, i);
	}
	return sum;
}

int Largestsum(int** matrix)
{
	int largest = 0;
	for (int i = 1; i < n; i+=2)
	{
		int temp = SumOfCol(matrix,i);
		if (largest<temp)
		{
			largest = temp;
		}
	}
	return largest;
}

int SumOfOddRows(int** matrix)
{
	int sums = 0;
	for (int i = 0; i < n; i+=2) //now you should start from on
	{
		for (int j = 0; j < n; j++)
		{
			sums += matrix[i][j];
		}
	}	
	return sums;
}

int main()
{
	
	std::cout << "Enter N for length of matrix : ";
	std::cin >> n;
	if (n<1 || n>100)
	{
		std::cout << "some error!" << std::endl;
		return 0;
	}
	int** matrix = new int*[n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[n];
	}
	FillMatrix(matrix);
	PrintMatrix(matrix);
	int largerSumOfCol = Largestsum(matrix);
	int sumOfOddRows = SumOfOddRows(matrix);
	int sumOfEvenColl = SumOfEvenCol(matrix);
	std::cout <<"Largest sum of even column is : ";
	std::cout<<largerSumOfCol<<std::endl;
	std::cout << "Sum of odd rows is : ";
	std::cout << sumOfOddRows << std::endl;
	
	if (sumOfOddRows<sumOfEvenColl)
	{
		std::cout << "Sum of rows is smaller then sum of columns!" << std::endl;
	}
	else
	{
		std::cout << "Sum of rows is bigger or equal to  sum of columns!" << std::endl;
	}
	
    return 0;
}

//1.75
