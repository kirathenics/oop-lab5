#include "Vector.h"
#include "Time.h"

int main()
{
	setlocale(0, "");

	cout << "Вектор типа int:" << endl;
	Vector<int> intVec(5);	// инициализация, ввод и вывод значений вектора
	cin >> intVec;
	cout << intVec << endl;
	Vector<int> copyIntVec;
	copyIntVec = intVec;	// операция присваивания
	cout << "Элемент вектора с индексом 1: " << intVec[1] << endl;	// доступ по индексу
	cout << "Размер вектора: " << intVec() << endl;		// получение размера вектора
	Vector<int> resVec = intVec + 4;	// добавление константы ко всем элементам вектора
	cout << "Результат добавления константы 4 ко всем элементам вектора: " << endl << resVec << endl;


	cout << endl << "Объект класса Time:" << endl;
	Time timeObj;
	cin >> timeObj;
	cout << timeObj;

	cout << endl << "Вектор типа Time:" << endl;
	Vector<Time> timeVec(4);
	cin >> timeVec;
	cout << timeVec << endl;

	Vector<Time> copyTimeVec;
	copyTimeVec = timeVec;
	cout << copyTimeVec << endl;

	cout << "Элемент вектора с индексом 1: " << timeVec[1] << endl;	// доступ по индексу
	cout << "Размер вектора: " << timeVec() << endl;		// получение размера вектора

	Vector<Time> result = timeVec + timeObj;
	cout << "Результат добавления константы созданного объекта класса Time ко всем элементам вектора: " << endl << result << endl;

	return 0;
}