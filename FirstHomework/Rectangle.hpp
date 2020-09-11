#pragma once
#include "Point.hpp"

class Rectangle {
private:
	int width;
	int height;
	int area;
public:
	Rectangle();
	Rectangle(Point, Point);
	int getArea();
};