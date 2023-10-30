#include <iostream>
#include <iomanip>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i) // Генерація
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size, int i) // Виведення
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}

int CalcSumm(int* a, const int size, int i, int S)
{
	if (!((i % 2) == 0))
		S += a[i];
	if (i < size - 1)
		return CalcSumm(a, size, i + 1, S);
	else
		return S;
}

int main()
{
	const int n = 15;
	int a[n];
	int Low = 1;
	int High = 40;

	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	CalcSumm(a, n, 0, 0);
	cout << "Summ = " << CalcSumm(a, n, 0, 0);

	return 0;
}
