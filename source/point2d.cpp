#include "point2d.hpp"

Point2d::Point2d()
{
	Point2d(0,0);
}

Point2d::Point2d(int x, int y):
x_(x),
y_(y)
{}

Point2d::~Point2d(){}

int const Point2d::get_x()
{
	return x_;
}
int const Point2d::get_y()
{
	return y_;
}
