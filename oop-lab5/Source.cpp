#include "Vector.h"

int main()
{
	setlocale(0, "");

	Vector<int> test(4);
	cout << test() << endl;
	cin >> test;
	cout << test << endl;
	cout << test + 4 << endl;

	return 0;
}