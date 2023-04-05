// C++ program to print fibbonacci series upto nth term
#include <iostream>
using namespace std;

void fibb(int n);
int main()
{
 
 int i =0;

 cout<<"Enter a number: ";
 cin>>i;

 fibb(i);
 
return 0;
}

void fibb(int n)
{
    int a = 0,b =1;
    int n_term =0;
    
    cout<<a<<","<<b;

    for (int i = 2; i < n; i++)
    {
        n_term =  a + b;
        a=b;
        b= n_term;

        cout<<n_term<<",";
    }
    
}