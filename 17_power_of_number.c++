// C++ program to the power of a number

#include <iostream>
using namespace std;

int powX(int b,int e);
int main()
{
 
 int base = 0,exp = 0,p = 0;

 cout<<"Enter base: ";
 cin>>base;

 cout<<"Enter exponant: ";
 cin>>exp;

 p = powX(base,exp);

 cout<<base<<" to the power "<<exp<<" is: "<<p;
 
return 0;
}

int powX(int b,int e)
{
    int power = b;

    for (int i = 1; i < e; i++) // 1 // 2
    {
        power *= b;// power = 5* 5 = 25 // 25 * 5 = 125
    }
    
    return power;
}