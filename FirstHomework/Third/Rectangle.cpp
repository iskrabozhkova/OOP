#include "Rectangle.hpp"
#include <cmath>

Rectangle::Rectangle() {
	width = 0;
	height = 0;
	area = 0;
}
Rectangle::Rectangle(Point firstPoint, Point secondPoint) {
	width = abs(firstPoint.getX() - secondPoint.getX());
	height = abs(firstPoint.getY() - secondPoint.getY());
	area = width * height;
}
int Rectangle::getArea() {
	return area;
}
