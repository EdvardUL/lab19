#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int enter_array_txt()
{
	int size;
	do
	{
		std::cout << "enter size of array: ";
		std::cin >> size;
	} while (size < 1);
	int* arrayA = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "enter " << i + 1 << " value of array: ";
		std::cin >> arrayA[i];
	}
	FILE* f = fopen("D:\\lab19\\GavrilchikVladimir.txt", "wt");
	if (f == NULL)
	{
		std::cout << "error.Open file."<<std::endl;
		system("pause");
		return 0;
	}
	for (int i = 0; i < size; i++)
	{
		fprintf_s(f, "%d# ", arrayA[i]);
	}
	std::cout << "Record is end:";
	fclose(f);
	return 0;
}