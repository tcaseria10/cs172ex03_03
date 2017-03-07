#include "LinearEquation.h"
#include <iostream>
#include <cmath>
using namespace std;

LinearEquation::LinearEquation() {
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;
	x = 0;
	y = 0;
}
LinearEquation::LinearEquation(double avalue, double bvalue, double cvalue, double dvalue, double evalue, double fvalue) {
	a = avalue;
	b = bvalue;
	c = cvalue;
	d = dvalue;
	e = evalue;
	f = fvalue;
	x = (e*d - b*f) / (a*d - b*c);
	y = (a*f - e*c) / (a*d - b*c);
}
double LinearEquation::getavalue() {
	return a;
}
double LinearEquation::getbvalue() {
	return b;
}
double LinearEquation::getcvalue() {
	return c;
}
double LinearEquation::getdvalue() {
	return d;
}
double LinearEquation::getevalue() {
	return e;
}
double LinearEquation::getfvalue() {
	return f;
}
double LinearEquation::getX() {
	return x;
}
double LinearEquation::getY() {
	return y;
}
bool LinearEquation::isSolvable() {
	if ((a*d - b*c) != 0)
		return true;
	else
		return false;
}
