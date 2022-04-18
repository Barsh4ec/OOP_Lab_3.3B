#pragma once
#include <string>
#include <sstream>
using namespace std;
class Triad
{
private:
	int first;
	int second;
	int third;
public:
	int getFirst() { return first; }
	int getSecond() { return second; }
	int getThird() { return third; }

	void setFirst(int value) { first = value; }
	void setSecond(int value) { second = value; }
	void setThird(int value) { third = value; }

	Triad();
	Triad(const int, const int, const int);
	Triad(const Triad&);

	friend ostream& operator << (ostream&, const Triad&);
	friend istream& operator >> (istream&, Triad&);

	operator string() const;

	friend bool operator < (Triad x, Triad y);
	friend bool operator <= (Triad x, Triad y);
	friend bool operator > (Triad x, Triad y);
	friend bool operator >=(Triad x, Triad y);
	friend bool operator == (Triad x, Triad y);
	friend bool operator != (Triad x, Triad y);
};

