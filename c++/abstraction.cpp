// Write any C++ program to implement abstraction using virtual functions.
#include <iostream>
using namespace std;
class Animal
{
    public:
    virtual void sounding()=0;
};
class Dog: public Animal
{
    public:
    void sounding(){
    cout<<"Bhow Bhow!!"<<endl;
    }
};
int main() {
    Dog d1;
    d1.sounding();

    return 0;
}