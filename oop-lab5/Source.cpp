#include "Vector.h"
#include "Time.h"

int main()
{
	setlocale(0, "");

	cout << "������ ���� int:" << endl;
	Vector<int> intVec(5);	// �������������, ���� � ����� �������� �������
	cin >> intVec;
	cout << intVec << endl;
	Vector<int> copyIntVec;
	copyIntVec = intVec;	// �������� ������������
	cout << "������� ������� � �������� 1: " << intVec[1] << endl;	// ������ �� �������
	cout << "������ �������: " << intVec() << endl;		// ��������� ������� �������
	Vector<int> resVec = intVec + 4;	// ���������� ��������� �� ���� ��������� �������
	cout << "��������� ���������� ��������� 4 �� ���� ��������� �������: " << endl << resVec << endl;


	cout << endl << "������ ������ Time:" << endl;
	Time timeObj;
	cin >> timeObj;
	cout << timeObj;

	cout << endl << "������ ���� Time:" << endl;
	Vector<Time> timeVec(4);
	cin >> timeVec;
	cout << timeVec << endl;

	Vector<Time> copyTimeVec;
	copyTimeVec = timeVec;
	cout << copyTimeVec << endl;

	cout << "������� ������� � �������� 1: " << timeVec[1] << endl;	// ������ �� �������
	cout << "������ �������: " << timeVec() << endl;		// ��������� ������� �������

	Vector<Time> result = timeVec + timeObj;
	cout << "��������� ���������� ��������� ���������� ������� ������ Time �� ���� ��������� �������: " << endl << result << endl;

	return 0;
}