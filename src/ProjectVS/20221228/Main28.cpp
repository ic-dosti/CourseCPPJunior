/*
* ���������� � ������������ ����:
* 1. ���������� ���� ���
* 2. ������ � ������� ���
* 3. ������ ����� C++ - 20
* 4. ������ ����� C - 18
*/

#include <iostream>
#include <cmath>

auto sumOfNumbers(numberA, numberB, numberC, numberD, numberE, numberF, numberG, numberX, numberY, numberZ) {
    auto VarSumOfNumbers = numberA + numberB + numberC + numberD + numberE + numberF + numberG + numberX + numberY + numberZ;
    return VarSumOfNumbers;
}




int main()
{
    setlocale(LC_ALL, "Ru-ru");

    std::cout << "28 ������� 2022\n" << std::endl;

    // ������������� ����������
    short int numberA = -100;
    unsigned short int numberB = 100;
    int numberC = -350;
    unsigned int numberD = 760;
    long numberE = -870;
    unsigned long numberF = 475;
    long long numberG = 899;

    // ����� � ��������� ������
    float numberX = -10.99;
    double numberY = 0.00599;
    long double numberZ = 30.9999999;

    // ����-����������� ���� ����������
    auto numberSeven = 900;

    std::cout << "����� A = " << numberA << ", ������ = " << sizeof(numberA) << std::endl;
    std::cout << "����� B = " << numberB << ", ������ = " << sizeof(numberB) << std::endl;
    std::cout << "����� C = " << numberC << ", ������ = " << sizeof(numberC) << std::endl;
    std::cout << "����� D = " << numberD << ", ������ = " << sizeof(numberD) << std::endl;

    std::cout << std::endl;

    std::cout << "����� E = " << numberE << ", ������ = " << sizeof(numberE) << std::endl;
    std::cout << "����� F = " << numberF << ", ������ = " << sizeof(numberF) << std::endl;
    std::cout << "����� G = " << numberG << ", ������ = " << sizeof(numberG) << std::endl;

    std::cout << std::endl;

    std::cout << "����� X = " << numberX << ", ������ = " << sizeof(numberX) << std::endl;
    std::cout << "����� Y = " << numberY << ", ������ = " << sizeof(numberY) << std::endl;
    std::cout << "����� Z = " << numberZ << ", ������ = " << sizeof(numberZ) << std::endl;
    std::cout << "����� numberSeven = " << numberSeven << ", ������ = " << sizeof(numberSeven) << std::endl;

    std::cout << std::endl;

    std::cout << "������� abs �� numberA = " << std::abs(numberA) << std::endl;
    std::cout << "������� fmod �� numberB � numberC = " << std::fmod(numberB, numberC) << std::endl;
    std::cout << "������� remainder �� numberD � numberE = " << std::fmod(numberD, numberE) << std::endl;
    std::cout << "������� lerp �� numberF, numberG, numberA = " << std::lerp(numberF, numberG, numberA) << std::endl;
    std::cout << "������� log1pl �� numberZ = " << std::log1pl(numberZ) << std::endl;
    std::cout << "������� hypotl �� numberX, numberZ = " << std::hypotl(numberX, numberZ) << std::endl;
    std::cout << "������� atan2l �� numberZ, numberY = " << std::atan2l(numberZ, numberY) << std::endl;
    std::cout << "������� atanhl �� numberZ = " << std::atanhl(numberZ) << std::endl;
    std::cout << "������� lgammaal �� numberZ = " << std::lgammal(numberZ) << std::endl;
    std::cout << "������� tgammal �� numberZ = " << std::tgammal(numberZ) << std::endl;
    std::cout << "������� betal �� numberZ = " << std::betal(numberY, numberZ) << std::endl;
    std::cout << "������� assoc_legendrel �� numberY, numberZ, numberX = " << std::assoc_legendrel(numberY, numberZ, numberX) << std::endl;
    std::cout << "������� sph_neumannl �� numberY, numberZ, numberX = " << std::sph_neumannl(numberY, numberZ) << std::endl;

    std::cout << std::endl;
    std::cout << "���������� ���������!" << std::endl;
    std::cout << std::endl;

    system("pause");
}