#include <iostream>
using namespace std;

class Number 
{
    public:
     int A;

     Number(int num)
     {
        A = num;
     }

     void checkNum()
     {
        if (A % 2 == 0)
        {
            cout<<A<<" is a even number";
        }
        else 
        {
            cout<<A<<" is a odd number";
        }
        
     }
};
int main()
{ 
    int no = 0;
    cout<<"Enter a number: ";
    cin>>no;

    Number obj(no);
    obj.checkNum();

    return 0;
}