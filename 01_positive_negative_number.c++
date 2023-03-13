// C++ program to check Positive or Negative number

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
        if (A > 0)
        {
            cout << A << " is positive number";
        }
        else if (A < 0)
        {
            cout << A << " is negative number";
        }
        else
        {
            cout << "Zero";
        }
    }
};

int main()
{
    int no = 0;
    cout << "Enter a number: ";
    cin >> no;

    Number obj(no);
    obj.checkNum();

    return 0;
}