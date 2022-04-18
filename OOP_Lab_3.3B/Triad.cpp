#include "Triad.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>
using namespace std;

Triad::Triad()
{
	setFirst(0);
	setSecond(0);
	setThird(0);
}
Triad::Triad(const int first, const int second, const int third)
{
	setFirst(first);
	setSecond(second);
	setThird(third);
}
Triad::Triad(const Triad& m)
{
	setFirst(m.first);
	setSecond(m.second);
	setThird(m.third);
}

bool operator < (Triad a, Triad b) {
	return (a.getFirst() < b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() < b.getSecond()) ||
		(a.getFirst() == b.getFirst() && a.getSecond() == b.getSecond() && a.getThird() < b.getThird());
}
bool operator <= (Triad a, Triad b) {
	return (a.getFirst() <= b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() <= b.getSecond()) ||
		(a.getFirst() == b.getFirst() && a.getSecond() == b.getSecond() && a.getThird() <= b.getThird());
}
bool operator > (Triad a, Triad b) {
	return (a.getFirst() > b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() > b.getSecond()) ||
		(a.getFirst() == b.getFirst() && a.getSecond() == b.getSecond() && a.getThird() > b.getThird());
}
bool operator >= (Triad a, Triad b)
{
	return (a.getFirst() >= b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() >= b.getSecond()) ||
		(a.getFirst() == b.getFirst() && a.getSecond() == b.getSecond() && a.getThird() >= b.getThird());
}
bool operator == (Triad a, Triad b) {
	return a.getFirst() == b.getFirst() && a.getSecond() == b.getSecond() && a.getThird() == b.getThird();
}
bool operator != (Triad a, Triad b) { return !operator ==(a, b); }

Triad::operator string() const {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	stringstream sout;
	sout << "вектор = (" << first << " , " << second << " , " << third << ")" << endl;
	return sout.str();
}

ostream& operator << (ostream& out, const Triad& a)
{
	out << (string)a;
	return out;
}
istream& operator >> (istream& in, Triad& a)
{
	cout << "x = ? "; in >> a.first;
	cout << "y = ? "; in >> a.second;
	cout << "z = ? "; in >> a.third;
	return in;
}