#pragma once
#include "Figure.h"
class Triangle : public Figure
{
private:
	double height;
	double base;
public:
	Triangle(double base, double height, std::string name);

	double GetArea() override;
};

