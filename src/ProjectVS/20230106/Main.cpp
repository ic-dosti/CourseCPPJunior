/*
* ���������� � ������������ ����:
* 1. ��������� ������ �������������
* 2. IC DOSTI, ����� �3�
* 3. ������ ����� C++ - 20
* 4. ������ ����� C - 18
*
* ������� 1: ������� ������ � ������������ � ������� multiset/set
* ������� 2: �������� ��������� ������ ��������� ������� � ������� srand ��� random generator number
*/

#include <iostream>
#include <ctime>
#include <set>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	// �������� ���������� �������� ��������� ��������
	srand(time(NULL));

	// ���������� ����������
	multiset <int> myMST;
	
	// ���������� ��������� �������� � ���������
	cout << "���������� ��������� ��������: " << endl;
	for (int i = 0; i < 10; i++) {
		int random = rand() % 10 + 1;
		myMST.insert(random);
		cout << i + 1 << ") " << random << endl;
	}
	
	multiset <int> ::iterator it = myMST.begin();

	// ����� ��������� �� ����������
	cout << "��������������� �������: " << endl;
	for (int i = 1; it != myMST.end(); i++, it++) {
		cout << *it << " ";
	}
	
	system("pause");
	return 0;
}