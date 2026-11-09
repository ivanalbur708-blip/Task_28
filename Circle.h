#pragma once
#include "Figure.h"
class Circle : public Figure
{
private:
	double radius;
public:
	Circle(double radius, std::string name);

	double GetArea() override;
};

