// Find the Greatest of the Two Numbers in C++
#include <iostream>
using namespace std;

class Num
{
public:
    int n1,n2;

    Num(int a, int b)
    {
        n1 = a;
        n2 =b;
    }
    
    void checkNum()
    {
        if (n1 > n2)
        {
            cout<<n1<<" is greatest";
        }
        else if (n2>n1)
        {
          cout<<n2<<" is greatest";
        }
        else
        {
            cout<<"Both zero";
        }
        
    }
};

int main()
{
    int num1 = 0,num2 = 0;

    cout<<"Enter 2 numbers:\n";
    cin>>num1>>num2;
    
    Num obj(num1,num2);
    obj.checkNum();
    return 0;
}