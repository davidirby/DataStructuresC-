/*	William David Irby
	Assignment 2
	Rectangle Class with Interface
	COSC 2436 Data Structures
	4/8/19

/** @file driver.cpp */

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle theRectangle;
	
	cout << "Intital state of the Rectangle" << endl;
	cout << "    length = " << theRectangle.getLength() << endl;
	cout << "    width = " << theRectangle.getWidth() << endl;
	cout << "    area   = " << theRectangle.getArea() << endl << endl;
	
	theRectangle.set(2.0, 2.0);
	cout << "Current state of the Rectangle" << endl;
	cout << "    length = " << theRectangle.getLength() << endl;
	cout << "    width = " << theRectangle.getWidth() << endl;
	cout << "    area   = " << theRectangle.getArea() << endl << endl;
	
	return 0;
}
