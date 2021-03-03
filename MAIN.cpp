#include <iostream>

#include<iomanip>

#include"Rectangle.h"

using namespace std;

int main()
{
    double W, H,W1,H1;
    
    cin >> W >> H>>W1>>H1;

    Rectangle rectangle1(W, H);
    Rectangle rectangle2(W1, H1);
    Rectangle rectangle3(5.0, 2.5);
    cout <<fixed<<setprecision(2)<< rectangle1.getArea() <<" "<< rectangle1.getPerimeter()<<endl;
    cout << fixed << setprecision(2) << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;
    cout << fixed << setprecision(2) << rectangle3.getArea() << " " << rectangle3.getPerimeter() << endl;

    return 0;
}
