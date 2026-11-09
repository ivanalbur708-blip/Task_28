#include "Triangle.h"

Triangle::Triangle(double base, double height, std::string name) : 
Figure(name),base(base),height(height){}

double Triangle::GetArea()
{
	return (base * height) / 2;
}
	