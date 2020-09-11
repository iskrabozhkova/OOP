#include <iostream>
#include "SVG.hpp"
using namespace std;

ScalableVectorGraphics::ScalableVectorGraphics(){
	firstFreeElement = 0;
}
void ScalableVectorGraphics::addRectangle(Rectangle rectangle) {
	rectangles[firstFreeElement] = rectangle;
	firstFreeElement = firstFreeElement + 1;
}
void ScalableVectorGraphics::createRectangle(Point firstPoint, Point secondPoint) {
	Rectangle rect(firstPoint, secondPoint);
	addRectangle(rect);
}
int  ScalableVectorGraphics::getRectangleWithMaxArea() {
	int indexWithMaxArea = 0;
	int maxArea = rectangles[0].getArea();
	for (int i = 0; i < firstFreeElement; i++) {
		if (rectangles[i].getArea() > maxArea) {
			maxArea = rectangles[i].getArea();
			indexWithMaxArea = i;
		}
	}
	return indexWithMaxArea;
}
