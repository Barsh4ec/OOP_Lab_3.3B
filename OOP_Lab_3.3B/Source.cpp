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
		cout << "перша тріада менша за другу" << endl;
	if (l <= r == true)
		cout << "перша тріада менша або рівна другій" << endl;
	if (l > r == true)
		cout << "перша тріада більша за другу" << endl;
	if (l >= r == true)
		cout << "перша тріада більша або рівна другій" << endl;
	if (l == r == true)
		cout << "перша і друга тріада рівні" << endl;
	if (l != r == true)
		cout << "перша і друга тріада не рівні" << endl;

	return 0;
}