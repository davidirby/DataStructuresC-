/** @file Rectangle.cpp */

#include "Rectangle.h"

Rectangle::Rectangle()
{
	length = 1.0;
	width =  1.0;
}

bool Rectangle::set(double newLength, double newWidth)
{
	if ((newLength > 0.0) && (newWidth > 0.0))
	{
		length = newLength;
		width = newWidth;
	}
	// else leave this Rectangle unchanged

}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getArea() const
{
	return length * width;
}
