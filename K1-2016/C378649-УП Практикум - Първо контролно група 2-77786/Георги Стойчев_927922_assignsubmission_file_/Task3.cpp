// Task3.cpp : main project file.

#include "stdafx.h"
#include <iostream>
int n = 0; 
bool error = false;
 void PrintArray(int* arr)
 {
	 for (int i = 0; i < n; i++)
	 {
		 std::cout << arr[i] << " ";
	 }
	 std::cout << std::endl;
 }
void FillArray(int* arr)
{
	
	for (int i = 0; i < n; i++)
	{
		std::cout << "Enter element on place"<<i <<" : ";
		std::cin >> arr[i];
		if (arr[i]<1 || arr[i]>22)
		{
			std::cout << "some error!";
			error = true;
			return;
		}
	}
	
}
int main()
{
	std::cout << "Enter n : ";
	std::cin >> n;
	if (n<10 || n>15)
	{
		std::cout << "some error!";
		return 0;
	}
	int choice = 0;
	int *arr3 = new int[n];
	int* arr1=new int[n];
	int* arr2=new int[n];
	FillArray(arr1);
	if (error==true)
	{
		std::cout << "some error!";
		return 0;
	}
	FillArray(arr2);
	if (error == true)
	{
		std::cout << "some error!";
		return 0;
	}
	std::cout << "If you want to sum arrays enter 1 if u want to izvadish(I forget about the word :D) enter 0" << std::endl; 
	//the word is substract, and while we're at it, it should be "I forgot the word"
	std::cin >> choice;
	if (choice==1)
	{
		for (int  i = 0; i <n; i++)
		{
			arr3[i] = arr1[i] + arr2[i];
		}
	}
	else if (choice == 0)
	{
		for (int i = 0; i <n; i++)
		{
			arr3[i] = arr1[i] - arr2[i];
		}
	}
	else {
		std::cout << "Some error";
		return 0;
	}
	PrintArray(arr1);
	PrintArray(arr2);
	PrintArray(arr3);
    return 0;
}

//1.15