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
	cout << "������� ������� �� ���� ���������, ������� ����� ����������:" << endl; cin >> n;
	cout << "���� ������� �� ���� ��������� = " << Fibonacchi(n) << endl;
	cout << "��� ��������� �� ���������� ��������: ";
	for (int i = 0; i <= n; i++)
	{
		cout  << Fibonacchi(i) << "\t";
	}
}