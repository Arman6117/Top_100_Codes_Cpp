// C++ program to find nth term of fibbonaci sequence

#include <iostream>
using namespace std;

int findTerm(int n);
int main()
{
 
 int i = 0,nTerm =0;

 cout<<"Enter a number: ";
 cin>>i;

 nTerm = findTerm(i);

 cout<<i<<"th term of fibbonacci sequence is: "<<nTerm;
 
return 0;
}

int findTerm(int n)
{
    int a = 0, b= 1, nth_term =0;

    for (int i = 2; i <= n; i++)
    {
        nth_term = a + b;
        a =b;
        b = nth_term;
    }
    
    return nth_term;
}