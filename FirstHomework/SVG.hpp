#pragma once
#include "Rectangle.hpp"

class ScalableVectorGraphics {
private:
	Rectangle rectangles[50];
	int firstFreeElement;
public:
	ScalableVectorGraphics();
	void addRectangle(Rectangle);
	void createRectangle(Point, Point);
	int getRectangleWithMaxArea();
};