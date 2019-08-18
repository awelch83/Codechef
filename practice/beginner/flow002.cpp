#include <iostream>
using namespace std;

int main()
{
    int a, b, numCases;

    cin >> numCases;

    for(int i = 0; i < numCases; i++)
    {
        cin >> a >> b;
        cout << a % b << endl;
    }

    return 0;
}
