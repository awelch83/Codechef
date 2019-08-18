#include <iostream>
using namespace std;

int main()
{
    int numCases;
    int currentNum;
    int first, last;

    cin >> numCases;

    for(int i = 0; i < numCases; i++)
    {
        cin >> currentNum;

        if(currentNum >= 0 && currentNum <= 9)
        {
            first = currentNum;
            last = currentNum;
        }
        else
        {
            last = currentNum % 10;

            while(currentNum / 10 > 0)
                first = (currentNum /= 10);
        }

        cout << (first + last)  << endl;
    }

    return 0;
}
