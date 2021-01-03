#include <iostream>
using namespace std;


int Fibonacchi(int n)
{
	if (n == 1 || n==2) return 1;
	if (n == 0) return 0;
	return Fibonacchi(n - 1) + Fibonacchi(n - 2);

}
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите элемент из ряда Фибоначчи, который нужно отобразить:" << endl; cin >> n;
	cout << "Этот элемент из ряда Фибоначчи = " << Fibonacchi(n) << endl;
	cout << "Ряд Фибоначчи до выбранного элемента: ";
	for (int i = 0; i <= n; i++)
	{
		cout  << Fibonacchi(i) << "\t";
	}
}