#include <iostream>
#include <Windows.h>
#include "Vector3D.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Vector3D l;
	cin >> l;
	cout << l << endl;

	Vector3D r;
	cin >> r;
	cout << r << endl;

	Vector3D t;
	t = l + r;
	cout << "a + b = (" << t.getFirst() << " , " << t.getSecond() << " , " << t.getThird() << ")" << endl;
	t = l - r;
	cout << "a - b = (" << t.getFirst() << " , " << t.getSecond() << " , " << t.getThird() << ")" << endl;
	cout << "a * b = " << l * r << endl;


	if (l < r == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (l <= r == true)
		cout << "����� ����� ����� ��� ���� �����" << endl;
	if (l > r == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (l >= r == true)
		cout << "����� ����� ����� ��� ���� �����" << endl;
	if (l == r == true)
		cout << "����� � ����� ����� ���" << endl;
	if (l != r == true)
		cout << "����� � ����� ����� �� ���" << endl;

	return 0;
}