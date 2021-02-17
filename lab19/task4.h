#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int read_array_txt()
{
	FILE* f;
	if (!(f = fopen("D:\\lab19\\GavrilchikVladimir.txt", "rt")))
	{
		std::cout << "error.Open file.";
		system("pause");
		return 0;
	}
	int x;
	while (!(feof(f)))
	{
		fscanf_s(f, "%d# ", &x);
		std::cout << x << '_';
	}
	std::cout << "\n";
	fclose(f);
	std::cout << "Read is end:";
	return 0;
}