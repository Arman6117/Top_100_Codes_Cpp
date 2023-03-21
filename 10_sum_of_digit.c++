// C++ Program to find the Sum of Digits of a Number
#include <iostream>
using namespace std;
class Sum
{
public:
    int sum, digit;
    Sum()
    {
        sum = 0, digit = 0;
    }
    int sumDigi(int A)
    {
        while (A != 0)
        {
            digit = A % 10;
            sum += digit;
            A /= 10;
        }

        return sum;
    }
};
int main()
{
    int num = 0, sum = 0;
    Sum obj;

    cout << "Enter a number: ";
    cin >> num;

    sum = obj.sumDigi(num);
    cout << "Sum of all digits of " << num << " is " << sum;

    return 0;
}
