#include "Vector3D.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

Vector3D::Vector3D()
	: Triad()
{}
Vector3D::Vector3D(double a, double b, double c)
	: Triad(a, b, c)
{}
Vector3D::Vector3D(const Vector3D& s)
	: Triad(s)
{}

Vector3D Vector3D::operator + (Vector3D r) {
	Vector3D t(0, 0, 0);
	t.setFirst(this->getFirst() + r.getFirst());
	t.setSecond(this->getSecond() + r.getSecond());
	t.setThird(this->getThird() + r.getThird());
	return t;
}

Vector3D Vector3D::operator - (Vector3D r) {
	Vector3D t(0, 0, 0);
	t.setFirst(this->getFirst() - r.getFirst());
	t.setSecond(this->getSecond() - r.getSecond());
	t.setThird(this->getThird() - r.getThird());
	return t;
}

double Vector3D::operator * (Vector3D r) {
	Vector3D t(0, 0, 0);
	t.setFirst(this->getFirst() * r.getFirst());
	t.setSecond(this->getSecond() * r.getSecond());
	t.setThird(this->getThird() * r.getThird());
	return t.getFirst() + t.getSecond() + t.getThird();
}