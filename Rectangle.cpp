#include"Rectangle.h"



    Rectangle::Rectangle(double newwidth, double newheight)
    {
        width = newwidth;
        height = newheight;
    }

    double Rectangle::getArea()
    {
        return width * height;
    }

    double Rectangle::getPerimeter()
    {
        return width * 2 + height * 2;
    }
  

