// C++ program to find factors of  a number

#include <iostream>
using namespace std;

void facto(int n);

int main()
{
 int i = 0;

 cout<<"Enter a number: ";
 cin>>i;

 facto(i);
 
return 0;
}

void facto(int n)
{
    if (n<= 0)
    {
        cout<<"PLZ ENTER A NON ZERO VALUE";
    }

    cout<<"Factors of "<<n<<" are: ";
    // int factors = 1;
    for (int i = 1; i <= n; i++)
    {
        if ( n % i == 0)
        {
           
            cout<<i<<", ";
        }

        // cout<<a;
        
        // factors = 1;
    }
    
}