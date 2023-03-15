// C++ Program to Print Prime numbers in a given range
#include <iostream>
using namespace std;
class Prime
{
public:
    int start, end;

    Prime(int A, int B)
    {
        start = A;
        end = B;
    }

    void printPrime()
    {
        int cnt = 0;
        for (int i = 2,j= start; i <= end; i++)
        {

            if (j % i == 0)
            {
                cnt++;
            }
            if (cnt == 0)
            {
                cout << j << " ";
            }
            cnt = 0;
        }
    }
};
int main()
{

    int s = 0, e = 0;

    cout << "Enter start and end for the range:\n";
    cin >> s >> e;

    Prime obj(s, e);

    obj.printPrime();

    return 0;
}
