#ifndef LINEAREQUATION_H_ 
#define LINEAREQUATION_H_

class LinearEquation {
private:
	double a;
	double b;
	double c;
	double d;
	double e;
	double f;
	double x;
	double y;
public:
	LinearEquation();
	LinearEquation(double avalue, double bvalue, double cvalue, double dvalue, double evalue, double fvalue);
	double getavalue();
	double getbvalue();
	double getcvalue();
	double getdvalue();
	double getevalue();
	double getfvalue();
	double getX();
	double getY();
	bool isSolvable();

};
#endif

#pragma once
