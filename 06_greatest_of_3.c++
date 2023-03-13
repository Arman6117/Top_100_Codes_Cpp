// Find the Greatest of the Two Numbers in C++
#include <iostream>
using namespace std;

class Num
{
public:
    int n1,n2,n3;

    Num(int a, int b,int c)
    {
        n1 = a;
        n2 =b;
        n3 =c;
    }
    
    void checkNum()
    {
        if ((n1>n2)&&(n1>n3))
        {
            cout<<n1<<" is greatest";
        }
        else if ((n2>n1)&&(n2>n3))
        {
          cout<<n2<<" is greatest";
        }
        else if ((n3>n1)&&(n3>n2))
        {
             cout<<n3<<" is greatest";
        }
        else
        {
            cout<<"Zero";
        }
    }
};

int main()
{
    int num1 = 0,num2 = 0,num3;

    cout<<"Enter 3 numbers:\n";
    cin>>num1>>num2>>num3;
    
    Num obj(num1,num2,num3);
    obj.checkNum();
    return 0;
}