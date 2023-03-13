// Find the Sum of Numbers in a Given Range in C++
#include <iostream>
using namespace std;

class Sum
{
public:
    int start, end;

    Sum(int a, int b)
    {
        start = a;
        end = b;
    }

    int sumNum()
    {
        int ans = 0;

        for (int i = start; i <= end; i++)
        {
            ans += i;
        }
        return ans;
    }
};

int main()
{
    int s = 0, e = 0, ans = 0;
    cout << "Enter range of number:\n";
    cin >> s >> e;

    Sum obj(s, e);
    ans = obj.sumNum();

    cout << "Sum of numbers between " << s << " and " << e << " is: " << ans;
    return 0;
}