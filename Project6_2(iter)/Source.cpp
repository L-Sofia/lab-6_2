#include <iostream>
#include <iomanip>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << a[i] << setw(4);
	cout << endl;
}

int CalcSumm(int* a, const int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (!((i % 2) == 0))
		sum += a[i];
	}
	return sum;
}

int main()
{
	const int n = 15;
	int a[n];
	int Low = 1;
	int High = 40;

	Create(a, n, Low, High);
	Print(a, n);

	CalcSumm(a, n);
	cout << "Summ = " << CalcSumm(a, n);

	return 0;
}
