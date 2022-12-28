/*
* ���������� � ������������ ����:
* 1. ���������� ���� ���
* 2. ������ � ������� ���
* 3. ������ ����� C++ - 20
* 4. ������ ����� C - 18
*/

#include <iostream>
#include <cmath>
#include <numeric> // https://en.cppreference.com/w/cpp/numeric
#include "Sum.h"

int main()
{
    setlocale(LC_ALL, "Ru-ru");

    std::cout << "28 ������� 2022\n" << std::endl;

    short int numberA = -100;
    unsigned short int numberB = 100;
    int numberC = -350;
    unsigned int numberD = 760;
    long numberE = -870;
    unsigned long numberF = 475;
    long long numberG = 899;

    float numberX = -10.99;
    double numberY = 0.00599;
    long double numberZ = 30.9999999;

    auto numberSeven = 900;
    
    int c = 10;

    if (c > 10) {
        // ���� while
        int i = 1;
        while (i < 10)
        {
            std::cout << "while = " << " * " << i << " = " << i * i << std::endl;
            i++;
        }
    }
    else if (c == 10) {
        // ���� for
        for (int a = 1; a < 10; a++)
        {
            std::cout << "for = " << a << " * " << a << " = " << a * a << std::endl;
        }
    }
    else if (c < 10) {
        // ���� do-while
        int b = 6;
        do
        {
            std::cout << "do-while = " << b << std::endl;
            b--;
        } while (b > 0);
    }
    else {
        std::cout << "���������� ������" << std::endl;
    }

    switch (c) {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    }


    long double resultOfSum = numberSum(numberA, numberB, numberC, numberD);
    std::cout << "��������� �������� ����� = " << resultOfSum;

    std::cout << std::endl;
    std::cout << "���������� ���������!" << std::endl;
    std::cout << std::endl;

    system("pause");
}