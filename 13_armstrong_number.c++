// C++ Program to Check whether a number is Armstrong number or not

#include <iostream>
#include <math.h>
using namespace std;

void checkNum(int A)
{
    int digits = 0,armNum=0,temp=0,num=0;

    num = A;

    while (num != 0) // 370
    {
        num % 10; // 0
        digits++; // 3
        num /= 10; // 37
    }
    num = A;

    while (num != 0) // 370
    {
        temp = num % 10; // 0
        armNum = armNum + pow(temp,digits); // 0 + 0 = 0 // 
        num /= 10;
    }
    if (A == armNum)
    {
        cout<<A<<" is an armstrong number";
    }
    else
    {
         cout<<A<<" is not an armstrong number";
    }
}
int main()
{
 int no = 0;

 cout<<"Enter a number: ";
 cin>>no;

 checkNum(no);
 
return 0;
}