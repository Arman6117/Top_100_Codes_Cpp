// C++ Program to Check Palindrome Number or not

#include <iostream>
using namespace std;
class Palindrome
{
public:
 int num,revNum,digit;

 Palindrome()
 {
    num = 0,revNum = 0,digit = 0;
 }
 void checkNum(int A)
 {
    num = A;
    while (num != 0)
    {
        digit =  num % 10;
        revNum = revNum * 10 + digit;
        num /= 10;

    }
    if (A==revNum)
    {
        cout<<"Given number is a palindrome number";
    }
    else
    {
        cout<<"Given number is not a palindrome number";
    }
 }
};
int main()
{
 int num = 0;
 
 cout<<"Enter a number: ";
 cin>>num;

 Palindrome obj;

 obj.checkNum(num);
 
return 0;
}
