#include "Circle.h"

Circle::Circle(double radius, std::string name) : 
Figure(name),radius(radius){}

double Circle::GetArea()
{
	return 3.14 * radius * radius;
}
