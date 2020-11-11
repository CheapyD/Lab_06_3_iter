#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

template <typename T>
void Inverse(T* a, const T n)
{
	int tmp;
	for (int i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = tmp;
		++i;
	}
}

int main()
{
	const int n = 10;
	int a[n] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Original masive" << endl;
	Print(a, n);
	cout << endl;

	cout << "Inversed masive" << endl;
	Inverse(a, n);
	Print(a, n);
	cout << endl;

	system("pause");
	return 0;
}