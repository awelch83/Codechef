#include <iostream>
using namespace std;

int main()
{
    int numTests;
    int num1;
    int num2;

    cin >> numTests;

    for(int i = 0; i < numTests; i++)
    {
        cin >> num1 >> num2;
        cout << (num1 + num2) << endl;
    }

    return 0;
}
