// C++ Program to check whether a number is a Strong Number or not

#include <iostream>
using namespace std;
int facto(int d)
{
    // cout<<"Inside facto";
    int f = 1;
    for (int i = 1; i <= d; i++)
    {
        f = f * i;
    }
    return f;
}
int checkStrong(int a)
{
    // cout<<"Inside strong";
    int digit = 0, sum = 0;

    while (a != 0)
    {
        digit = a % 10;
        sum = sum +  facto(digit);
        a = a / 10;
    }

    return sum;
}
int main()
{
    int num = 0, st_no = 0;
    cout << "Enter a number: ";
    cin >> num;

    st_no = checkStrong(num);
    if (st_no == num)
    {
        cout << num << " is a strong number";
    }
    else
    {
        cout << num << " is not a strong number";
    }
    return 0;
}

/*
 1] seprate each number
 2] calculate factor of each number
 3] Add factors of each number
 4] Check output is same as given number or not
*/