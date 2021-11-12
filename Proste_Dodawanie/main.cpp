#include <iostream>
using namespace std;

int main()
{
    short t = 1;
    short numSize = 0;
    short nums = 0;
    short sum = 0;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> numSize;
        for (int j = 0; j < numSize; j++)
        {
            cin >> nums;
            sum += nums;
        }
        cout << sum;
        sum = 0;
    }

    return 0;
}
