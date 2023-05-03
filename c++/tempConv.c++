/*Write a C++ program to implement two temperature objects – one in
Celsius and the other one in Fahrenheit and convert the temperatures
from Celsius to Fahrenheit and vice versa.*/

#include<iostream>
using namespace std;
class Temperature
{
    double temp;
    char unit;
    public:
    Temperature(double a,char b)
    {
        temp=a;
        unit=b;
    }
    void tempConverter()
    {
       if(unit=='c')
       cout<<(temp*9)/5+32<<"F"<<endl;
       else
       cout<<(temp-32)*5/9<<"C"<<endl;
    }
};
int main()
{
   Temperature t1(32.0,'f'), t2(0.0,'c');
   t1.tempConverter();
   t2.tempConverter();
  
  return 0;
}