// C++ program to Find Prime Factors of a Number

#include <iostream>
using namespace std;
int checkPrime(int n);
void checkFact(int a)
{
    int primeFact =0;
    for (int i = 1; i <a; i++)
    {
        if (a % i==0)
        {
           primeFact = checkPrime(i);
        // cout<<i<<" ,";
        }
        
        cout<<primeFact<<",";
    }
    
}

int checkPrime(int n)
{
    int cnt = 0;
int  i =2;
    for ( i ; i <n ; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
       
           
    }
     if (cnt==0)
        {
            return i;
        }
    
}
int main()
{
 
 int n = 315;

 checkFact(n);
 
return 0;
}
