#include <iostream>	
#include "LinearEquation.h"
using namespace std;

// Tyler Caseria
// CS172
// Hw 03 : Exercise 03
// 23 February 2017

int main() {
	int valuea;
	int valueb;
	int valuec;
	int valued;
	int valuee;
	int valuef;
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
	int x4;
	int y4;

	cout << "Line 1:" << endl;
	cout << "Input the x coordinate of your first point, then press enter: ";
	cin >> x1;
	cout << endl;
	cout << "Input the y coordinate of your first point, then press enter: ";
	cin >> y1;
	cout << endl;
	cout << "Input the x coordinate of your second point, then press enter: ";
	cin >> x2;
	cout << endl;
	cout << "Input the y coordinate of your second point, then press enter: ";
	cin >> y2;
	cout << endl;


	cout << "Line 2:" << endl;
	cout << "Input the x coordinate of your first point, then press enter: ";
	cin >> x3;
	cout << endl;
	cout << "Input the y coordinate of your first point, then press enter: ";
	cin >> y3;
	cout << endl;
	cout << "Input the x coordinate of your second point, then press enter: ";
	cin >> x4;
	cout << endl;
	cout << "Input the y coordinate of your second point, then press enter: ";
	cin >> y4;
	cout << endl;

	valuea = x1-x2;
	valueb = x3*y4-y3*x4;
	valuec = y3-y4;
	valued = x3-x4;
	valuee = x1*y2-y1*x2;
	valuef = y1-y2;

	LinearEquation equation1(valuea, valueb, valuec, valued, valuee, valuef);

	if ((equation1.getavalue() *equation1.getdvalue() - equation1.getbvalue()*equation1.getcvalue()) == 0)
		cout << "The lines do not intersect." << endl;

	cout << "Your lines intersect at (" << equation1.getX() << ", " << equation1.getY() << ")." << endl;
	

	int one;
	cout << "Press 1, then press enter to exit." << endl;
	cin >> one;
	return 0;
}