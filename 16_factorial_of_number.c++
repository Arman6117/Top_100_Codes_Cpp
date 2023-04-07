// C++ program to calculate factorial of a number
#include <iostream>
using namespace std;

int facto(int n);
int main()
{
 
 int i = 0, factorial = 0, &f = factorial;

cout<<"Enter a number: ";
cin>>i;

f = facto(i);

cout<<"Factorial of "<<i<<" is: "<<factorial;
 
return 0;
}

int facto(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    
    return fact;
}
