/*
* ���������� � ������������ ����:
* 1. ��������� ������ �������������
* 2. IC DOSTI, ����� �3�
* 3. ������ ����� C++ - 20
* 4. ������ ����� C - 18
*
*
* ������� 1: �������� std::array
* ������� 2: �������� std::vector
*/

#include <iostream>
#include <algorithm>
#include <cmath>
#include <numbers>
#include <array>
#include <vector>

using namespace std;

int main() {
	// Data structure
	array <double, 10> PublicNumbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	array <double, 10> PrivateNumbers = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	vector <int> VectorNumbers = {};
	vector <int> ArrayToVector = {};

	// Variables
	int outputVar = 0;


	cout << "2023-01-04" << endl;
	cout << endl;
	cout << "Enter the number:";
	cin >> outputVar;
	VectorNumbers.push_back(outputVar);
	cout << VectorNumbers.size() << endl;

	return 0;
}