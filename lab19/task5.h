#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

struct motorcycle
{
	int cylinder;
	double tank_capacity;
	char gearbox;
	bool generator;
	char model[20];
}h;
int record_struct()
{
	std::cout << "enter quantity of cylinder: ";
	std::cin >> h.cylinder;
	std::cout << "enter capacity of tank: ";
	std::cin >> h.tank_capacity;
	std::cout << "enter type of gearbox: ";
	std::cin >> h.gearbox;
	std::cout << "enter status of generator(1 - on,0 - off): ";
	std::cin >> h.generator;
	std::cout << "enter model of motocycle: ";
	std::cin.ignore();
	std::cin.getline(h.model, 20);
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
	FILE* f;
	if (!(f = fopen("D:\\lab19\\GavrilchikVladimir1.txt", "at")))
	{
		std::cout << "Error";
		system("pause");
		return 0;
	}
	fprintf_s(f, "%d@ %lf@ %c@ %d@ %s@\n", h.cylinder, h.tank_capacity, h.gearbox, h.generator, h.model);
	fclose(f);
	std::cout << "Record is end:";
	return 0;
}