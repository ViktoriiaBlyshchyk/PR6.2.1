#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Input(int* a, const int n, int i)
{
	cout << "a[" << i << "] = ";
	cin >> a[i];
	if (i < n - 1)
		Input(a, n, i + 1);
	else
		cout << endl;
}

void Print(int* a, const int n, int i)
{
	cout << setw(5) << a[i];
	if (i < n - 1)
		Print(a, n, i + 1);
	else
		cout << endl;
}

int Max(int* a, const int n, int i, int max)
{
	if (a[i] > max && abs(a[i]) % 2 == 1)
		max = a[i];
	if (i < n - 1)
		return Max(a, n, i + 1, max);
	else
		return max;
}

int main()
{
	int n;
	cout << " " << "n = ";
	cin >> n;
	int* a = new int[n];


	Input(a, n, 0);
	Print(a, n, 0);

	cout << "max = " << Max(a, n, 1, a[0]) << endl;

	return 0;
}
