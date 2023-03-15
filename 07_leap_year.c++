// Program to Check Whether a Year is a Leap Year or Not in C++
#include <iostream>
using namespace std;
class Year
{
public:
    int year;

    Year(int A)
    {
        year = A;
    }

    void checkYear()
    {
        if (year % 400 == 0)
        {

            cout << year << " is a Leap year";
        }
        else if ((year % 4 == 0) && (year % 100 != 0))
        {
            cout << year << " is a Leap year";
        }
        else
        {
            cout << year << " is not a Leap year";
        }
    }
};
int main()
{
    int y = 0;
    cout << "Enter year: ";
    cin >> y;

    Year obj(y);

    obj.checkYear();
    
    return 0;
}
