#pragma once
#include "Figure.h"
class Rectangle : public Figure
{
private:
	double width;
	double height;
public:
	Rectangle(double width, double height,std::string name);
	double GetArea() override;


};

