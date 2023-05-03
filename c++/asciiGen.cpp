// Write a C++ program to print the ASCII code of a given character.
#include <iostream>
using namespace std;
void asciiCon(char c)
{
    int a=(int)c;
    cout<<"ASCII value is: "<<a<<endl;
}
int main() {
   char c;
   cout<<"enter a character"<<endl;
   cin>>c;
   asciiCon(c);
    return 0;
}