#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, max;
	cout << "Введите три целых числа: ";
	cin >> a >> b >> c;

	if(a >= b && a >= c)
		max = a;
	if (b >= c && c >= b)
		max = b;
	if (c >= a && c >= b)
		max = c;
	cout << "Max: " << max;
	cout << "\n";
	return 0;
}

