#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int groupSize;
    int exp;
    int bestSpot;
    int numTests;

    cin >> numTests;

    for(int i = 1; i <= numTests; i++)
    {
        cin >> groupSize;

        //  Calculate best spot to stand in line
        exp = (double)log10(groupSize) / log10(2);
        bestSpot = pow(2.0,exp);

        cout << bestSpot << "\n";
    }

    return (0);
}

