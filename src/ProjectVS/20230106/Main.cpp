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
	srand(time(NULL));
	multiset <int> mst;
	
	cout << "���������� ��������� ��������: " << endl;
	
	for (int i = 0; i < 10; i++) {
		int random = rand() % 10 + 1;
		mst.insert(random);
		cout << i + 1 << ") " << random << endl;
	}
	
	multiset <int> ::iterator it = mst.begin();
	cout << "��������������� �������: " << endl;
	
	for (int i = 1; it != mst.end(); i++, it++) {
		cout << *it << " ";
	}
	
	system("pause");
	return 0;
}