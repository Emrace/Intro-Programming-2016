// UPPraktGeorgiStoichev.cpp : main project file.

#include "stdafx.h"
#include <iostream>
int main()
{
	int num = 0;
	std::cout << "Enter number between 1 and 1000 included : ";
	std::cin >> num;
	if (num<1 || num>1000)
	{
		std::cout << "Incorrect value!";
		return 0;
	}
	for (int i = num; i > 6; i--)
	{
		if (i%7==0)
		{
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;
	system("pause");
    return 0;
	
}

//1.0