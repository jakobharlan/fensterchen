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

int Point2d::get_x() const
{
	return x_;
}
int Point2d::get_y() const
{
	return y_;
}
