#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "task5.h"
int read_struct()
{
	FILE* f;
	if (!(f = fopen("D:\\lab19\\GavrilchikVladimir1.txt", "rt")))
	{
		std::cout << "Error";
		system("pause");
		return 0;
	}
	int cylinder; double tank_capacity; char gearbox; bool generator; char model[20];
	while (!feof(f))
	{
		fscanf_s(f, "%d %lf %c %b %s\n", &cylinder, &tank_capacity, &gearbox, &generator, &model);
		std::cout << cylinder << '|' << tank_capacity << '|' << gearbox << '|' << generator << '|' << model << std::endl;
	}
	fclose(f);
	std::cout << "Read is end:";
	return 0;
}
