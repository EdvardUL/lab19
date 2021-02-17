#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "task5.h"
int read_struct_bin()
{
	motorcycle h;
	FILE* f;
	if (!(f = fopen("D:\\lab19\\GavrilchikVladimirBin.bin", "rb")))
	{
		std::cout << "Error";
		system("pause");
		return 0;
	}
	fread(&h, sizeof(motorcycle), 1, f);
	while (!feof(f))
	{
		std::cout << "Your entered data:" << h.cylinder << "\t|\t" << h.tank_capacity << "\t|\t" << h.gearbox << "\t|\t";
		if (h.generator == 1)
		{
			std::cout << "Generator On";
		}
		else
		{
			std::cout << "Generator Off";
		}
		std::cout << "\t|\t" << h.model;
		fread(&h, sizeof(motorcycle), 1, f);
	}
	fclose(f);
	return 0;
}