#include<iostream>
using namespace std;
class Complex
{
    int real;
    int imag;
    public:
        Complex(int x,int y)
        {
            imag=y;
            real=x;
        }
         Complex()
        {
            imag=0;
            real=0;
        }
        friend Complex operator + (Complex &a,Complex &b)
        {
            Complex temp;
            temp.real=a.real+b.real;
            temp.imag=a.imag+b.imag;
            return temp;
        }
        void display()
        {
          cout<<real<<"+ i "<<imag<<endl;  
        }
};
int main()
{
    Complex c1(10,20);
    Complex c2(3,2);
    Complex c3;
    c3=c1+c2;
    
    c3.display();
    return 0;
    
}
