//Implement an abstract class called Shape in C++ and implement the sub classes to find the area of a rectangle and circle.

#include<iostream>
#include<math.h>
using namespace std;
class Shape
{
    public:
    virtual void area()=0;
};
class Rectangle: public Shape
{
    int len,wid;
    public:
    Rectangle(int a,int b)
    {
        len=a;
        wid=b;
    }
    void area()
    {
        cout<<"Area: "<<len*wid<<endl;
    }
};
class Circle: public Shape
{
    int rad;
    public:
    Circle(int a)
    {
        rad=a;
    }
    void area()
    {
        cout<<"Area: "<<3.14*pow(rad,2)<<endl;
    }
};
int main()
{
    Rectangle r(10,20);
    Circle c(5);
    r.area();
    c.area();
  
  return 0;
}