#include <iostream>
using namespace std;
class Num 
{
 public:

    int n,cnt;

    Num(int A)
    {
        n = A;
        cnt = 0;
    }

    void checkPrime()
    { 
        for (int i = 2; i < n; i++)
        {
           if (i % n == 0)
           {
            cnt++;
           }
           
        }
        if (cnt ==0)
        {
            cout<<n<<" is a prime number";
        }
        else
        {
            cout<<n<<" is not a prime number";
        }
    }
 
};
int main()
{

    int no = 0;

    cout<<"Enter a number: ";
    cin>>no;

    Num obj(no);

    obj.checkPrime();
 
 
return 0;
}
