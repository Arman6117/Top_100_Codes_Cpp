// C++ Program to check whether a number is Perfect Number or not

#include <iostream>
using namespace std;

void checkNum(int n)
{
    int div = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            div += i;
        }
        
    }
    if (div == n)
    {
        cout<<n<<" is a perfect number";
    }
    else
    {
        cout<<n<<" is a not perfect number";
    }
    
}
int main()
{
 
 int a = 0;
 cout<<"Enter a number: ";
 cin>>a;
 checkNum(a);
 
return 0;
}

