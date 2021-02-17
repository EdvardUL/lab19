#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int enter_text_txt()
{
    FILE* wf;
    char text[100];
    std::cout << "enter paragraph of the text:";
    std::cin.ignore();
    std::cin.getline(text, 100);
    std::cout << "Recorded text:";
    std::cout << text << std::endl;
    if (!(wf = fopen("D:\\lab19\\GavrilchikVladimir.txt", "wt")))
    {
        std::cout << "error.Open file.";
        system("pause");
        return 0;
    }
    int i = 0;
    while (text[i] != NULL)
    {
        fputc(text[i++], wf);
    }
    fclose(wf);
    std::cout << "Record is end:";
    return 0;
}