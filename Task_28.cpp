
#include <iostream>
#include "Figures.h"

class Menu
{
public:
    void Run()
    {
        int type;

        std::cout << "0. Rectangle\n";
        std::cout << "1. Circle\n";
        std::cout << "2. Triangle\n";
        std::cout << "Choose: ";
        std::cin >> type;

        switch (type)
        {
        case 0:
        {
            std::string name;
            double width, height;

            std::cin >> width >> height;
            std::cin >> name;

            Rectangle rectangle(width, height, name);

            std::cout << rectangle.GetArea() << " ";
            std::cout << rectangle.GetName();
            break;
        }
        case 1:
        {
            std::string name;
            double radius;

            std::cin >> radius;
            std::cin >> name;

            Circle circle(radius, name);

            std::cout << circle.GetArea() << " ";
            std::cout << circle.GetName();
            break;
        }
        case 2:
        {
            std::string name;
            double base, height;

            std::cin >> base >> height;
            std::cin >> name;

            Triangle triangle(base, height, name);

            std::cout << triangle.GetArea() << " ";
            std::cout << triangle.GetName();
            break;
        }
        default:
            std::cout << "Invalid choice\n";
            break;
        }
    }
};

int main()
{
    Menu menu;
    menu.Run();
}
