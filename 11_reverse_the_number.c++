// C++ Program to find the Reverse of a Number
#include <iostream>
using namespace std;
class Rev
{
public:
  int rem,reverse;
  Rev()
  {
     rem = 0,reverse = 0;
  }
  int revNum(int A)
  {
    while (A != 0)
    {
        rem = A % 10;
        reverse = reverse* 10 + rem;
        A /= 10;
    }
    return reverse;
  }
};
int main()
{
   int num = 0,rev =0;
   cout<<"Enter a number: ";
   cin>>num;
  
   Rev obj;
   rev = obj.revNum(num);

   cout<<"Reverse number: "<<num<<" -> "<<rev;

 
return 0;
}