#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int read_text_txt()
{
    FILE* rf;
    if ((rf = fopen("D:\\lab19\\GavrilchikVladimir.txt", "rt")) == NULL)
    {
        std::cout << "error.Read file.Check file way"<<std::endl;
        system("pause");
        return 0;
    }
    char c = fgetc(rf);
    while (!feof(rf))
    {
        std::cout << c;
        c = fgetc(rf);
    }
    fclose(rf);
    std::cout << std::endl;
    std::cout << "reading is ended" << std::endl;;
    system("pause");
      return 0;
}