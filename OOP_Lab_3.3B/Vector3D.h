#pragma once
#include <string>
#include "Triad.h"
using namespace std;

class Vector3D : public Triad
{
public:
	Vector3D();
	Vector3D(double, double, double);
	Vector3D(const Vector3D&);

	Vector3D operator + (Vector3D r);
	Vector3D operator - (Vector3D r);
	double operator * (Vector3D r);

};