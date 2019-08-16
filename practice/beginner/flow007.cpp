#include <iostream>
using namespace std;

int reverse(int num)
{
    int r = 0;

    while(num > 0)
    {
        r = (r * 10) + (num % 10);
        num /= 10;
    }

    return r;
}

int main()
{
    int numTests;
    int toReverse;
    cin >> numTests;

    for(int i = 0; i < numTests; i++)
    {
        cin >> toReverse;
        cout << reverse(toReverse) << endl;
    }

    return 0;
}
