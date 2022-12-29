/*
* ���������� � ������������ ����:
* 1. ��������� ������ �������������
* 2. IC DOSTI, ����� �3�
* 3. ������ ����� C++ - 20
* 4. ������ ����� C - 18
* 
* 
* ������� 1: ����������� � ��������, const � constexpr, �������� �� � ���� ����������� - 80
* 
* ������� 2: ����� ������ � ���� ����, � �������� ��� ��������� �� ���������� #include <algorithm> - 100+
*/

#include <iostream>
#include <cmath>


int main() {
	setlocale(LC_ALL, "Ru-ru");

	int varSwitch = 0;

	long double varA = 0.00000;
	long double varB = 0.00000;
	long double varC = 0.00000;
	long double varX = 0.00000;

	long double &varA1 = varA;
	long double &varB1 = varB;
	long double &varC1 = varC;

	std::cout << "�������� ���������� ��������� - a*x^2 + b*x + c = 0" << std::endl;
	std::cout << std::endl;
	// varResult1
	std::cout << "������� �������� a: ";
	std::cin >> varA;
	std::cout << "������� �������� b: ";
	std::cin >> varB;
	std::cout << "������� �������� c: ";
	std::cin >> varC;
	std::cout << std::endl;
	std::cout << "������� ����� ����������:" << std::endl;
	std::cout << "1. ������������" << std::endl;
	std::cout << "2. ������� �����" << std::endl;

	std::cout << std::endl;
	std::cout << "��� �����: ";
	std::cin >> varSwitch;
	switch (varSwitch) {
	case 1: {
		std::cout << std::endl;
		std::cout << "������������ - a*x^2 + b*x + c = 0" << std::endl;
		const long double varDNT = pow(varB1, 2) - (4 * varA1 * varC1);

		if (varDNT > 0) {
			std::cout << std::endl;
			std::cout << "�����: ��� �����" << std::endl;
			const long double varX1 = (-varB1 + sqrt(varDNT)) / (2 * varA1);
			const  double varX2 = (-varB1 - sqrt(varDNT)) / (2 * varA1);
			std::cout << "������ ������ = " << varX1 << std::endl;
			std::cout << "������ ������ = " << varX1 << std::endl;
			std::cout << "���������� ������..." << std::endl;
		}
		else if (varDNT == 0) {
			std::cout << std::endl;
			std::cout << "�����: ���� ������" << std::endl;
			const long double varX1 = -(varB1 / (2 * varA1));
			std::cout << "������ = " << varX1 << std::endl;
			std::cout << "���������� ������..." << std::endl;
		}
		else if (varDNT < 0) {
			std::cout << std::endl;
			std::cout << "�����: �������������� ������ ���!" << std::endl;
		}
		else {
			std::cout << std::endl;
			std::cout << "������! ���������� ��� ���!" << std::endl;
		}
	}
		break;
		
	case 2: {
		std::cout << std::endl;
		std::cout << "������� ����� - a*x^2 + b*x + c = 0" << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "�����: ��� �����" << std::endl;
		const long double varX1 = -(varB1 / varA1);
		const long double varX2 = varC1 / varA1;
		std::cout << "������ ������ = " << varX1 << std::endl;
		std::cout << "������ ������ = " << varX1 << std::endl;
		std::cout << "���������� ������..." << std::endl;
	}
		break;

	default: {
		std::cout << std::endl;
		std::cout << "������! ���������� ��� ���!" << std::endl;
	}
		break;
	}
}