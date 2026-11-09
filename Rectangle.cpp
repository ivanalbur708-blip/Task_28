#include "Rectangle.h"

Rectangle::Rectangle(double width, double height,std::string name) : 
Figure(name),width(width),height(height){}

double Rectangle::GetArea() 
{
	return width * height;
}
