#pragma once
#include  <string>
class Figure
{
protected:
	std::string name;
public:
	Figure(std::string name);
	virtual double GetArea() { return 0; }
	std::string GetName() const { return name; }
};

