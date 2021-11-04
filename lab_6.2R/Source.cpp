#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
using namespace std;
void Create(int* a, int size, int i)
{
	a[i] = 0 + rand() % (100 + 1);
	if (i < size - 1)
		Create(a, size, i + 1);
}
void Print(int* a, int size, int i)
{
	cout << setw(2) << a[i] << " ";
	if (i < size - 1)
		Print(a, size, i + 1);
}
int Find(int* a, int size, int i, int find)
{
		if (a[i] % 2 != 0)
		{
			find += a[i];
		}
		if (i < size - 1)
			return Find(a, size, i + 1, find);
		else
	return find;
}
int Aver(int* a, int size, int i, int k, int aver)
{
		if (a[i] % 2 != 0)
		{
			k++;
		}
		if (i < size - 1)
			return Aver(a, size, i + 1, k, aver);
		else
	if (k == 0)
		cerr << "There isn`t odd numbers!" << endl;
	else
		return k;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 5;
	int a[n];
	Create(a, n, 0);
	cout << "a[";
	Print(a, n, 0);
	cout << "]" << endl;
	cout << "Average Element = " << Find(a, n, 0, 0) / Aver(a, n, 0, 0, 0) << endl;
	return 0;
}