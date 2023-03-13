// C++ Program to Find the Sum of N Natural Numbers
#include <iostream>
using namespace std;

class Sum
{
    public:
     int A;

     Sum(int no)
     {
        A = no;
     }
     int sumNum()
     {
        int ans = 0;

        for (int i = 1; i <=A; i++)
        {
            ans += i;
        }
        return ans;
     }
};
int main()
{ 
    int no = 0,ans =0;
    cout<<"Enter a number: ";
    cin>>no;

     Sum obj(no);

     ans = obj.sumNum();

     cout<<"Sum is: "<<ans;

    return 0;
}