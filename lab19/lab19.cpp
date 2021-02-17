#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "task6.h"
#include "task7.h"
#include "task8.h"
int main()
{
    int a;
    for (;;)
    {
        std::cout << "enter the number of the task you want to run: ";
        std::cin >> a;
        switch (a)
        {
        case 1:
        {
            std::cout << "running task 1...\n";
            enter_text_txt();
            break;
        }
        case 2:
            std::cout << "running task 2...\n";
            read_text_txt();
            break;
        case 3:
            std::cout << "running task 3...\n";
            enter_array_txt();
            break;
        case 4:
            std::cout << "running task 4...\n";
            read_array_txt();
            break;
        case 5:
            std::cout << "running task 5...\n";
            record_struct();
            break;
        case 6:
            std::cout << "running task 6...\n";
            read_struct();
            break;
        case 7:
            std::cout << "running task 6...\n";
            record_struct_bin();
            break;
        case 8:
            std::cout << "running task 6...\n";
            read_struct_bin();
            break;
        default:
            std::cout << "error,try again\n";
        }
        std::cout << "\n";
        std::cout << "want to continue?\n 1 - yes\t 2 - no\n";
        std::cin >> a;
        if (a == 2)
        {
            return 0;
        }
    }
    return 0;
}
